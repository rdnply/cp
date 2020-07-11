#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define PI acos(-1)
#define EPS 1e-5
#define sz(v) ((int)(v).size())
#define all(v) v.begin(),v.end()
#define forn(i, n) for(ll i=0;i<(ll)n;i++)
#define fi first
#define se second
 

int main() {
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));
	int mn = 1e9;
	forn(i, n){
		cin >> c[i];
		forn(j, m){
			cin >> a[i][j];
		}
	}
	for(int mask = 0; mask < (1<<n); mask++) {
		vector<int> t(m);
		int sum = 0;
		for(int i = 0; i < n; i++) {
		if((mask>>i)&1) {
			sum += c[i];
			for(int j = 0; j < m; j++)
				t[j] += a[i][j];
			}
			
		}
		bool ok = true;
		for(int i = 0; i < m; i++) {
			if(t[i] < x) {
				ok = false;
				break;
			}
		}

		if(ok) mn = min(mn, sum);
	}	
	if(mn == 1e9) cout << -1 << endl;
	else cout << mn << endl;
	return 0;
}

