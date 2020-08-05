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
	vector<int> st;
	map<int, int> m;
	while(n--) {
		int type, x;
		cin >> type;
		if(type == 1) {
			cin >> x;
			st.pb(x);
			m[x]++;
		} else if(type == 2) {
			int v = *prev(st.end());
			m[v]--;
			if(m[v] <= 0) m.erase(v);
			st.pop_back();
		}else {
			pii p = *prev(m.end());
			cout << p.fi << endl;
		}
	}
	return 0;
}

