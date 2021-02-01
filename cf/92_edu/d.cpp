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
		ll n, k;
		cin >> n >> k;
		ll l1, r1, l2, r2;
		cin >> l1 >> r1;
		cin >> l2 >> r2;

		ll ans = 1e18;
		if(max(l1, l2) <= min(r1, r2)) {
			ll rem = max(0LL, k - n* (min(r1, r2) - max(l1, l2)));
			ll maxPossible = n * (abs(l1 -l2) + abs(r1 - r2));
			ans = min(rem, maxPossible) + max(ll(0), rem - maxPossible) * 2;
		} else {
			ll invest = max(l1, l2) - min(r1, r2);
			for(int i = 1; i <= n; i++) {
				ll curans = invest * i;
				ll maxPossible = (max(r1, r2) - min(l1, l2)) * i;
				curans += min(k, maxPossible) + max((ll)0, k - maxPossible) * 2;
				ans = min(ans, curans);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

