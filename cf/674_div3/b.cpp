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
		int n, m;
		cin >> n >> m;
		vector<vector<int>> v(n, vector<int>(4));
		for(int i = 0; i < n; i++) {
			cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
		}
		if(m % 2) {
			cout << "NO" << endl;
			continue;
		}
		bool ok = false;
		for(int i = 0; i < n; i++) {
			if(v[i][1] == v[i][2]) {
				ok = true;
				break;
			}
		}
		if(ok) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

