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
		int n, k;
		cin >> n >> k;
		vector<int> h(n);
		forn(i, n) cin >> h[i];
		int mn = h[0], mx = h[0];
		bool ok = true;
		for(int i = 1; i < n; i++) {
			mn = max(mn-k+1, h[i]);
			mx = min(mx+k-1, h[i]+k-1);
			if(mn > mx) {
				ok = false;
				break;
			}
		}
		if(!(h[n-1] >= mn && h[n-1] <= mx)) {
			ok = false;
		}
		cout << (ok?"YES":"NO") << endl;
	}
	return 0;
}

