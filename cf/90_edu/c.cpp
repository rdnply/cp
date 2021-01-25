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
		string s;
		cin >> s;
		int n = sz(s);
		vector<int> cnt(n);
		cnt[0] = (s[0] == '+'?1:-1);
		for(int i = 1; i < n; i++) {
			cnt[i] += cnt[i-1] + (s[i] == '+'? 1 : -1);
		}
		vector<pii> v(n);
		for(int i = 0; i < n; i++) {
			v[i] = {-cnt[i], i};
		}
		sort(all(v), [](const pii& l, const pii& r) {
			if(l.fi == r.fi) {
				return l.se < r.se;
			}
			return l.fi < r.fi;
		});

		ll res = 0;
		int init = 0;
		while(1) {
			auto idx = upper_bound(all(v), init, [](const int n, const pii& p){
				return p.fi > n;
			});
		  	if(idx != v.end()) {
				pii p = *idx;
				res += p.se+1; 
			} else {
				res += n;
				break;
			}	
			init++;
		}
		cout << res << endl;
	}
	return 0;
}

