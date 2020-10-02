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
		vector<int> res;
		ll sum = 0;
		for (ll i = 2; i <= n; i += 2) {
			res.pb(i); 
			sum += i;
		}

		ll j = 1;
		int cnt = 0;
		while(cnt < n/2-1) {
			sum -= j;
			res.pb(j);
			j += 2;
			cnt++;
		}
		
		if(sum % 2 == 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			res.pb(sum);
			for(auto i : res) {
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

