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
	int n;
	cin >> n;
	stack<pii> ele, maxi;
	int i = 1;
	while(n--) {
		int type, x;
		cin >> type;
		if(type == 1) {
			cin >> x;
			ele.push({x, i});
			if(sz(maxi) == 0) {
				maxi.push({x, i});
			} else {
				pii t = maxi.top();
				if(t.fi < x) {
					maxi.push({x, i});
				}
			}
			i++;
		} else if(type == 2) {
			pii p1 = ele.top();
			ele.pop();
			pii p2 = maxi.top(); 

			if(p1.fi == p2.fi && p1.se == p2.se) {
				maxi.pop();
			}
			i--;
		} else {
			pii mx = maxi.top();
			cout << mx.fi << endl;
		}
	}
	return 0;
}

