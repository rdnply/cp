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
	int n, k;
	cin >> n >> k;
	vector<int> times[4], sums[4];
	for(int i = 0; i < n; i++) {
		int t, a, b;
		cin >> t >> a >> b;
		times[a*2+b].pb(t);
	}
	for(int i = 1; i < 4; i++) {
		sort(all(times[i]));
		sums[i].pb(0);
		for(auto t: times[i]) {
			sums[i].pb(sums[i].back()+t);
		}
	}
	int mn = 2e9+10;
	for(int cnt = 0; cnt < min(k+1, sz(sums[3])); cnt++) {
		if(k-cnt < sz(sums[1]) && k-cnt < sz(sums[2])) {
			mn = min(mn, sums[3][cnt] + sums[1][k-cnt] + sums[2][k-cnt]);
		}
	}
	if(mn == 2e9+10)
		cout << -1 << endl;
	else cout << mn << endl;
	return 0;
}

