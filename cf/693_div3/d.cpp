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
		int n;
		cin >> n;
		vector<int> a(n);
		forn(i, n) cin >> a[i];
		sort(a.rbegin(), a.rend());
		ll ans = 0;
		for(int i = 0; i < n; i++) {
			if(i % 2 == 0) {
				if(a[i] % 2 == 0) {
					ans += a[i];
				}
			} else {
				if(a[i] % 2 != 0) {
					ans -= a[i];
				}
			}
		}
		if(ans == 0) {
			cout << "Tie" << endl;
		} else if(ans > 0) {
			cout << "Alice" << endl;
		} else cout << "Bob" << endl;
	}
	return 0;
}

