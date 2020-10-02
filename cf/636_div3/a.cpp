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
 
ll binpow(ll a, ll n) {
	ll res = 1;
	while(n) {
		if(n&1) {
			res *= a;
		}
		a *= a;
		n >>= 1;
	}

	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		for(int k = 2; k <= 30; k++) {
			ll b = binpow(2, k); 
			ll s = b-1;
			if(n % s == 0){
				cout << n / s << endl;
				break;
			}
		}
	}
	return 0;
}

