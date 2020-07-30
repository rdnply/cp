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
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<vector<int>> cnt(26, vector<int>(n + 1));
		forn(i, n) {
			forn(j, 26) cnt[j][i + 1] = cnt[j][i];
			++cnt[a[i] - 1][i + 1];
		}
		int ans = 0;
		forn(i, 26) ans = max(ans, cnt[i][n - 1]);
		forn(l, n) for(int r = l;r<n; r++) {
			int cntin = 0, cntout = 0;
			forn(el, 26) {
				cntin = max(cntin, cnt[el][r + 1] - cnt[el][l]);
				cntout = max(cntout, min(cnt[el][l], cnt[el][n] - cnt[el][r + 1]) * 2);
			}
			ans = max(ans, cntin + cntout);
		}
		cout << ans << endl;
	}
	
	return 0;
}

