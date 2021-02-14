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
	int q;
	cin >> q;
	while(q--) {
		string s, t;
		cin >> s >> t;
		int n = sz(s), m = sz(t);
		if(m > n) {
			cout << 0 << endl << endl;
			continue;
		}
		ll cnt = 0;
		vector<int> res;
		for(int i = 0; i < n; i++) {
			if(i+m-1 >= n) break;
			bool ok = true;
			int j = 0;
			for(j; j < m; j++) {
				if(t[j] == '?' || s[i+j] == t[j]) {
				} else {
					ok = false;
					break;
				}
			}
			if(ok && j == m) {
				cnt++;
				res.pb(i);
			}
		}
		cout << cnt << endl;
		for(auto i: res) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

