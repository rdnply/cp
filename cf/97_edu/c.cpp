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
 
const int INF = 1e9;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<ll> a(n);
		forn(i, n) {
			cin >> a[i];
			a[i]--;
		}
		sort(all(a));
		vector<vector<ll>> dp(n+1, vector<ll>(2*n, INF));
		dp[0][0] = 0;
		forn(i, n+1) forn(j, 2*n -1) if(dp[i][j] < INF) {
			if(i < n) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + abs(a[i] - j));
			dp[i][j+1] = min(dp[i][j+1], dp[i][j]);
		}
		cout << dp[n][2*n-1] << endl;
	}
	return 0;
}

