#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define pf push_front
#define PI acos(-1)
#define EPS 1e-5
#define sz(v) ((int)(v).size())
#define all(v) v.begin(),v.end()
#define forn(i, n) for(ll i=0;i<(ll)n;i++)
#define fi first
#define se second

ll mul(ll a, ll b, ll x, ll y, ll n) {
	int c = max(x, a-n);
	int diff = a-c;
	a -= diff;
	n -= diff;
	c = max(y, b-n);
	diff = b-c;
	b -= diff;
	n -= diff;

	return a*b;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		cout << min(mul(a,b,x,y,n), mul(b,a,y,x,n)) << endl;
	}
	return 0;
}

