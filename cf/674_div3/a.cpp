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
		int n, x;
		cin >> n >> x;
		int res = 0;
		if(n == 1 || n == 2) {
			cout << 1 << endl;
			continue;
		}

		for(int i = 0; i < 5000; i++) {
			if(n >= i*x+3 && n <= (i+1)*x+2) {
				res = i;
				break;
			}
		}
		cout << res+2 << endl;
	}
	return 0;
}

