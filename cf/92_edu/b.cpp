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
		int n, k, z;
		cin >> n >> k >> z;
		vector<int> a(n);
		forn(i, n) cin >> a[i];
		int ans = 0;
		for(int t = 0; t <= z; t++) {
			int pos = k-2*t;
			int mx = 0, s = 0;
			if(pos < 0) continue;
			for(int i = 0; i <= pos; i++) {
				if(t < n-1) 
					mx = max(mx, a[i]+a[i+1]);	
				s += a[i];
			}
			ans = max(ans, s+mx*t);
		}
		cout << ans << endl;
	}
	return 0;
}

