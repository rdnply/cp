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
 
ll d(ll a) {
	ll ans = 0;
	while(a) {
		a/=10;
		ans++;
	}
	return ans;
}

int main() {
	ll a, b, x;
	cin >> a >> b >> x;
	ll l = 0, r = 1e9+1;
	while(r-l > 1) {
		ll m = (l+r)/2 ;
		if(a*m+b*d(m) > x)
			r = m;
		else
			l = m;
	}
	cout << l << endl;
	return 0;
}

