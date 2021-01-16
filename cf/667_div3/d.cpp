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

int sum(ll n) {
	int res = 0;
	while(n > 0) {
		res += n % 10;
		n /= 10;
	}
	return res;
}
 

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		int s;
		cin >> n >> s;
		ll ans = 0;
		if(sum(n) <= s) {
			cout << 0 << endl;
			continue;
		}
		ll pw = 1;
		for(int i = 0; i < 18; i++) {
			int digit = (n/pw) % 10;
			ll add = pw * ((10-digit) % 10);
			n += add;
			ans += add;
			if(sum(n) <= s) {
				break;
			}
			pw *= 10;
		}
		cout << ans << endl;
	}
	return 0;
}

