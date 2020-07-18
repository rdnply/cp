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
vector<int> dx = {0, -1, 1, 0};
vector<int> dy = {1, 0, 0, -1};

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> v(h);
	forn(i, h) cin >> v[i];
	int mx = 0;
	
	forn(i, h) {
		forn(j , w) {
			if(v[i][j] == '#') continue;
			vector<vector<int>> seen(h, vector<int>(w, INF));
			queue<pii> q;
			q.push({i,j});
			seen[i][j] = 0;

			while(!q.empty()) {
				pii p = q.front();
				q.pop();
				forn(k, 4) {
					int f = p.fi + dx[k];
					int	s = p.se + dy[k];
				   	if(f < 0 || f > h-1 || s < 0 || s > w-1) continue;
					if(v[f][s] == '#' || seen[f][s] != INF) continue;
					q.push({f,s});
					seen[f][s] = seen[p.fi][p.se] + 1;

				}
			}

			forn(i, h)
			   	forn(j, w)
			   		if(v[i][j] != '#') mx = max(mx, seen[i][j]);
		}
	}

	cout << mx << endl;
	return 0;
}

