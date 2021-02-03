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
		vector<int> cnt;
		int n = sz(s);
		int c = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				c++;
			} else {
				cnt.pb(c);
				c = 0;
			}	
			
		}
		if(c > 0) cnt.pb(c);
		sort(all(cnt), greater<int>());
		int res = 0;
		for(int i = 0; i < sz(cnt); i++) {
			if(i % 2 == 0) {
				res += cnt[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}

