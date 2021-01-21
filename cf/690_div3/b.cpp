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
		if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') {
			cout << "YES" << endl;
			continue;
		} else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') {
			cout << "YES" << endl;
			continue;
		} else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') {
			cout << "YES" << endl;
			continue;
		} else {
			auto found = s.find("2020");
			if(found == 0) {
				cout << "YES" << endl;
				continue;
			
			} else if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') {
				cout << "YES" << endl;
				continue;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}

