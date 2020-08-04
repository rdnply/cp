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

ld dist(pair<ld,ld> a, pair<ld,ld> b) {
	return sqrt((a.fi-b.fi)*(a.fi-b.fi)+(a.se-b.se)*(a.se-b.se));
}
 
int main() {
	int n;
	cin >> n;
	set<pair<ld,ld>> xx, yy;
	forn(i, n) {
		ld tx, ty;
		cin >> tx >> ty;
		if(tx == 0) {
			yy.insert({tx,ty});
		} else {
			xx.insert({tx, ty});
		}
	}

	ld mx = 0;

	if(sz(xx)) {
		mx = max(mx, dist(*xx.begin(), *prev(xx.end())));	
	}

	if(sz(yy)) {
		mx = max(mx, dist(*yy.begin(), *prev(yy.end())));	
	}

	if(sz(xx) && sz(yy)) {
		mx = max(mx, dist(*xx.begin(), *yy.begin()));	
		mx = max(mx, dist(*xx.begin(), *prev(yy.end())));	
		mx = max(mx, dist(*prev(xx.end()), *prev(yy.end())));	
		mx = max(mx, dist(*prev(xx.end()), *yy.begin()));	
	}

	cout << fixed << setprecision(7) << mx << endl;
	return 0;
}
