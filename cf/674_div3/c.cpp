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
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		int mn = 1e9;
		for(int x = 1; x <= sqrt(n); x++) {
			int cnt = x-1;
			cnt += ((n-x)+x-1)/x;
			mn = min(mn, cnt);
		}
		cout << mn << endl;
	}
	return 0;
}

