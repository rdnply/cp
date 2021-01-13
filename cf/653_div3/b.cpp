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
		int n2 = 0, n3 = 0;
		while(n % 2 == 0){
			n /= 2;
			n2++;
		}
		while(n % 3 == 0) {
			n /= 3;
			n3++;
		}
		if(n != 1) {
			cout << -1 << endl;
		} else {
			if(n2 > n3) {
				cout << -1 << endl;
			} else {
				cout << abs(n2-n3) + max(n2, n3) << endl;
			}
		}
	}
	return 0;
}

