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
		string s;
		cin >> s;
		vector<int> ans(n);
		vector<int> pos0, pos1;
		for(int i = 0; i < n; i++) {
			int newpos = sz(pos0) + sz(pos1);
			if(s[i] == '0') {
				if(pos1.empty()) {
					pos0.pb(newpos);
				} else {
					newpos = pos1.back();
					pos1.pop_back();
					pos0.pb(newpos);
				}
			} else {
				if(pos0.empty()) {
					pos1.pb(newpos);
				} else {
					newpos = pos0.back();
					pos0.pop_back();
					pos1.pb(newpos);
				}	
			}
			ans[i] = newpos;
		}
		cout << sz(pos0) + sz(pos1) << endl;
		for(auto i : ans) {
			cout << i+1 << " ";
		}
		cout << endl;
	}
	return 0;
}

