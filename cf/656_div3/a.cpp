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
		int x, y, z;
		cin >> x >> y >> z;
		if(x == y && y == z) {
			cout << "YES" << endl;
			cout << x << " " << y << " " << z << endl;
		} else if(x == y && x > z && y > z) {
			cout << "YES" << endl;
			cout << z << " " << y << " " << z << endl;
		} else if(x == z && x > y && z > y) {
			cout << "YES" << endl;
			cout << y << " " << y << " " << z << endl;
		} else if(y==z && y > x && z > x) {
			cout << "YES" << endl;
			cout << x << " " << x << " " << z << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

