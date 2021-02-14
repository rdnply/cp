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
		int n;
		cin >> n;
		vector<int> r(n);
		forn(i, n) cin >> r[i];
		int m;
		cin >> m;
		vector<int> b(m);
		forn(i, m) cin >> b[i];
		partial_sum(all(r), r.begin());
		partial_sum(all(b), b.begin());
		cout << max(0, *max_element(all(r))) + max(0, *max_element(all(b))) << endl;
	}
	return 0;
}

