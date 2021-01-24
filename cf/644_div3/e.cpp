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
		vector<vector<int>> a(n, vector<int>(n));
		forn(i, n) forn(j, n) {
			char c;
			cin >> c;
			a[i][j] = c - '0';
		}

		bool ans = true;
		for(int i = n-2; i >= 0; i--) {
			for(int j = n-2; j >= 0; j--) {
				if(a[i][j] && !a[i+1][j] && !a[i][j+1]) {
					ans = false;
				}
			}
		}
		cout << (ans?"YES":"NO") << endl;
	}
	return 0;
}

