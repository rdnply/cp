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
		bool ok = false;
		for(int i = 0; i <= n/3; i++) {
			bool ok1 = false;
			for(int j = 0;  j <= n/5; j++) {
				bool ok2 = false;
				for(int k = 0; k <= n/7; k++) {
					if(i*3 + j*5 + k*7 == n) {
						cout << i << " " << j << " " << k << endl;
						ok2 = true;
						break;
					}
				}
				if(ok2) {
					ok1 = true;
					break;
				}
			}
			if(ok1) {
				ok = true;
				break;
			}
		}
		if(!ok) {
			cout << -1 << endl;
		}
	}
	return 0;
}

