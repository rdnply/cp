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
		vector<int> v;
		int cur = 1;
		int i = 1;
		bool ok1, ok2;
		ok1 = ok2 = false;
		while(i <= n) {
			if(i % 2 != 0) {
				v.pb(n-cur);
				ok1 = true;
			} else {
				v.pb(cur-1);
				ok2 = true;
			}	

			if(ok1 && ok2) cur++, ok1=0, ok2=0;
			i++;
		}

		forn(i, n) {
			if(v[i] == k) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}

