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
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			for(int j = i; j < n; j++) {
				bool pref = true, suf = true;
				for(int k = 0; k < j-i+1; k++) {
					if(s[k] != s[i+k]) {
						pref = false;
						break;
					}
				}
				for(int k = 0; k < j-i+1; k++) {
					if(s[n-k-1] != s[j-k]) {
						suf = false;
						break;
					}
				}
				if(!pref && suf || pref && !suf) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

