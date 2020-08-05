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
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> n(a), m(b), k(c);
	int sa, sb, sc;
	sa = sb = sc = 0;
	forn(i, a) cin >> n[i], sa += n[i];
	forn(i, b) cin >> m[i], sb += m[i];
	forn(i, c) cin >> k[i], sc += k[i];

	int i, j, z;
	i = j = z = 0;
	int res = 0;
	while(true) {
		if(sa == sb && sb == sc) {
			res = sa;
			break;
		}

		if(sa > sb || sa > sc)
			sa -= n[i++];
		if(sb > sa || sb > sc)
			sb -= m[j++];
		if(sc > sa || sc > sb)
			sc -= k[z++];	
	}

	cout << res << endl;
	return 0;
}

