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
		int mx = 0;
		int n = sz(s);
		for(int i = 0; i < n; i++) {
			bool ok = true;
			for(int j = 0; j <= i/2; j++) {
				if(s[j] != s[i-j]) {
					ok = false;
					break;
				}
			}
			if(ok) mx = max(mx, i);
		}
		cout << mx+1 << endl;
	}
	return 0;
}

