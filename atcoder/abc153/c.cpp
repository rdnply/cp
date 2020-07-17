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
	int n, k;
	cin >> n >>k;
	vector<int> h(n);
	forn(i, n) cin >> h[i];
	if(k >= n) cout << 0 << endl;
	else {
		sort(all(h));
		ll res = 0;
		for(int i = 0; i < n-k; i++) {
			res += h[i];
		}

		cout << res << endl;
	}

	return 0;
}

