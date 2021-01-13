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
		vector<int> a(n);
		forn(i, n) {
			cin >> a[i];
		}
		map<int, int> cnt;
		int mx = 0;
		for(auto i: a) {
			if(i%k==0)
				continue;
			cnt[k-i%k]++;
			mx = max(mx, cnt[k-i%k]);
		}

		ll ans = 0;
		for(auto [key, value]: cnt) {
			if(value == mx)
				ans = k*1ll*(value-1)+key+1;
		}
		cout << ans << endl;
	}
	return 0;
}

