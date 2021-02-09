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
 

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<ll> a(n);
		forn(i, n) cin >> a[i];
		ll sum = accumulate(all(a), 0ll);
		ll k = max(*max_element(all(a)), (sum+n-2)/(n-1));
		cout << k*(n-1) - sum << endl;
	}
	return 0;
}

