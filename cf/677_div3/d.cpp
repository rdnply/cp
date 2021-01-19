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
		int idx = -1;
		vector<pii> res;
		for(int i = 1; i < n; i++) {
			if(a[i] != a[0]) {
				idx = i;
				res.pb({1, idx+1});
			}
		}
		if(idx == -1) {
			cout << "NO" << endl;
			continue;
		}

		for(int i = 1; i < n; i++) {
			if(a[i] == a[0]) {
				res.pb({idx+1, i+1});	
			}
		}
		cout << "YES" << endl;
		for(auto [x, y]: res) cout << x << " " << y << endl;
	}
	return 0;
}

