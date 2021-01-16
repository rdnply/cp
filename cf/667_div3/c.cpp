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
		int n, x, y;
		cin >> n >> x >> y;
		int diff = y-x;
		for(int d = 1; d <= diff; d++) {
			if(diff %d) continue;
			if(diff / d+1 > n) continue;
			int k = min((y-1)/d, n-1);
			int a0 = y-k*d;
			for(int i = 0; i < n; i++) {
				cout << a0 + i*d << " ";
			}
			cout << endl;
			break;
		}
	}
	return 0;
}

