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

const string T = "abacaba";
 
int count(string s) {
	int cnt = 0;
	for(int i = 0; i < sz(s); i++) {
		if(s.substr(i, sz(T)) == T)
			cnt++;
	}

	return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool F = false;
		for(int i = 0; i+sz(T) <= sz(s); i++) {
			string ss = s;
			bool ok = true;
			for(int j = 0; j < sz(T); j++) {
				if(s[i+j] != '?' && s[i+j] != T[j]) {
					ok = false;
					break;
				}
				ss[i+j] = T[j];

				// i change code, seriously
			}
			if(ok && count(ss) == 1) {
				for(int i = 0; i < sz(ss); i++) {
					if(ss[i] == '?') ss[i] = 'd';
				}
				cout << "YES" << endl;
				cout << ss << endl;
				F = true;
				break;
			}
		}
		if(!F) cout << "NO" << endl;
	}
	return 0;
}

