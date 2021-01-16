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
 
vector<int> w, cnt;
vector<vector<pii>> g;

ll getdiff(int i) {
	return w[i] * 1ll * cnt[i] - (w[i]/2) * 1ll * cnt[i];
}

void dfs(int v, int p = -1) {
	if (sz(g[v]) == 1) cnt[p] = 1;
	for (auto [to, id]: g[v]) {
		if(id == p) continue;
		dfs(to, id);
		if(p != -1) cnt[p] += cnt[id];
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		ll s;
		cin >> n >> s;
		w = cnt = vector<int>(n-1);
		g = vector<vector<pii>>(n);
		for(int i = 0; i < n-1; i++) {
			int x, y;
			cin >> x >> y >> w[i];
			x--, y--;
			g[x].pb({y, i});
			g[y].pb({x, i});
		}
		dfs(0);
		set<pair<ll, int>> st;
		ll cur = 0;
		for(int i = 0; i < n-1; i++) {
			st.insert({getdiff(i), i});
			cur += w[i] * 1ll * cnt[i];
		}
		int ans = 0;
		while(cur > s) {
			int id = st.rbegin()->second;
			st.erase(prev(st.end()));
			cur -= getdiff(id);
			w[id] /= 2;
			st.insert({getdiff(id), id});
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}

