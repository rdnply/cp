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
		int p, f;
		cin >> p >> f;
		int cnts, cntw;
		cin >> cnts >> cntw;
		int s, w;
		cin >> s >> w;
		if(s > w) {
			swap(s, w);
			swap(cnts, cntw);
		}
		int ans = 0;
		for(int s1 = 0; s1 <= min(cnts, p/s); s1++) {
			int w1 = min(cntw, (p-s*s1)/w);
			int s2 = min(cnts-s1, f/s);
			int w2 = min(cntw-w1, (f-s*s2)/w);
			ans = max(ans, s1+w1+s2+w2);
		}
		cout << ans << endl;
	}
	return 0;
}

