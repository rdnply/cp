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
		bool equal = true;
		for(int i = 0; i < n-1; i++) {
			if(a[i] != a[i+1]) {
				equal = false;
				break;
			}
		}
		if(equal) {
			cout << -1 << endl;
			continue;
		}

		int mx = *max_element(all(a));
		int res = 0;
		for(int i = 1; i < n-1; i++) {
			if(a[i] == mx && (a[i-1] < mx || a[i+1] < mx)) {
				res = i;
				break;
			}
		}
		if(sz(a) > 1 && a[0] == mx && a[1] < mx) {
			res = 0;
		}
		if(sz(a) > 1 && a[n-1] == mx && a[n-2] < mx) {
			res = n-1;
		}
		cout << res+1 << endl;
	}
	return 0;
}

