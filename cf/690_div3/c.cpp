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
		int x;
		cin >> x;
		if(x > 45) {
			cout << -1 << endl;
			continue;
		}

		if(x < 10) {
			cout  << x << endl;
			continue;
		}
		vector<int> a;
		vector<bool> used(10);
		int last = 9;
		while(1) {
			x -= last;
			used[last] = true;
			a.pb(last);
			if(x < 10) {
				if(used[x]) {
					last--;
					continue;
				} else {
					a.pb(x);
					break;
				}
			}
			last--;
		}
		if(x -a.back() !=  0) {
			cout << -1 << endl;
			continue;
		}

		int res = 0;
		int d = sz(a)-1;
		reverse(all(a));
		for(int i = 0; i < sz(a); i++) {
			res += a[i] * pow(10, d);
			d--;	
		}
		cout << res << endl;
	}
	return 0;
}

