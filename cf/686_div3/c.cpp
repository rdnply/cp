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
		vector<int> a(n);
		forn(i, n) cin >> a[i];
		vector<int> u = {a[0]};
		for(int i = 1; i < n; i++) {
			if(a[i-1] != a[i]) {
				u.pb(a[i]);
			}
		}
		map<int, int> cnt;
		for(int i = 0; i < sz(u); i++) {
			cnt[u[i]]++;
		}
		for(auto [k, v]: cnt) cnt[k]++;
		cnt[a[0]]--;
		cnt[a[n-1]]--;
		int mn = 1e9;
		for(auto [k, v]: cnt) {
			mn = min(mn, v);
		}
		cout << mn << endl;
	}
	return 0;
}
 
