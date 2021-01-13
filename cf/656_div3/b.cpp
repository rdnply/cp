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
		vector<int> a(n*2);
		forn(i, 2*n) cin >> a[i];
		vector<int> res;
		vector<int> cnt(n+1);
		for(int i = 0; i < 2*n; i++) {
			if(cnt[a[i]] == 0) {
				res.pb(a[i]);
				cnt[a[i]]++;
			}
		}
		for(auto i:res)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}

