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
 
int count(int n) {
	int c = 0;
	while(n > 0) {
		n /= 10;
		c++;
	}
	return c;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		int d = x % 10;
		int c = count(x);
		int res = (d-1) * 10;
		for(int i = 1; i <= c; i++) res += i;
		cout << res << endl;
	}
	return 0;
}

