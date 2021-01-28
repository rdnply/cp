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
		int cntr = 0, cnts = 0, cntp = 0;
		int n = sz(s);
		for(int i = 0; i < n; i++) {
			if(s[i] == 'R') cntr++;
			if(s[i] == 'S') cnts++;
			if(s[i] == 'P') cntp++;
		}
		if(cntr >= cnts && cntr >= cntp) {
			string r(n, 'P');
			cout << r << endl;
		}
		else if(cnts >= cntr && cnts >= cntp) {
			string r(n, 'R');
			cout << r << endl;
		}
		else {
			string r(n, 'S');
			cout << r << endl;
		}

	}
	return 0;
}

