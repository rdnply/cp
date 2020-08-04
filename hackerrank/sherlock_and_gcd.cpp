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
 
const int N = 1e6;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		forn(i, n) {
			cin >> a[i];
		}
		int g = a[0];
		if(sz(a) > 1) {
			g = __gcd(a[0], a[1]);
		}
		for(int i = 1; i < n; i++) {
			g = __gcd(g, a[i]);
		}

		
		cout << (g==1?"YES":"NO") << endl;
	}
	return 0;
}

