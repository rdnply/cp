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

vector<int> ord;
vector<vector<int>> g;
vector<int> used;
 
void dfs(int v) {
	used[v] = 1;
	for(auto to: g[v]) {
		if(!used[to]) dfs(to);
	}	
	ord.pb(v);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		g = vector<vector<int>>(n);
		vector<pii> edges;
		forn(i, m) {
			int t, x, y;
			cin >> t >> x >> y;
			x--, y--;
			if(t == 1) {
				g[x].pb(y);
			}
			edges.pb({x, y});
		}
		ord.clear();
		used = vector<int>(n);
		forn(i, n) {
			if(!used[i])
				dfs(i);
		}
		reverse(all(ord));
		vector<int> pos(n);
		forn(i, n) {
			pos[ord[i]] = i;
		}
		bool bad = false;
		forn(i, n) {
			for(auto j: g[i]) {
				if(pos[i] > pos[j]) {
					bad = true;
				}
			}
		}
		if(bad) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			for(auto [x, y]: edges) {
				if(pos[x] < pos[y]) {
					cout << x+1 << " " << y+1 << endl;
				} else {
					cout << y+1 << " " << x+1 << endl;
				}
			}
		}
	}
	return 0;
}

