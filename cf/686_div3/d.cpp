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
		ll n;
		cin >> n;
		vector<pair<int, ll>> val;
		for(ll i = 2; i*i <= n; i++) {
			int cnt = 0;
			while(n % i == 0) {
				cnt++;
				n /= i;
			}
			if (cnt > 0) val.pb({cnt, i});
		}
		if(n > 1) {
			val.pb({1, n});
		}

		sort(val.rbegin(), val.rend());
		vector<ll> ans(val[0].fi, val[0].se);
		for(int i = 1; i < sz(val); i++) {
			for(int j = 0; j < val[i].fi; j++) {
				ans.back() *= val[i].se;
			}
		}

		cout << sz(ans) << endl;
		for(auto i : ans) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

