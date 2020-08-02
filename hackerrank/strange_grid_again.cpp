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
	ll r;
	int c;
	cin >> r >> c;
	if(r % 2 != 0) {
		ll res = (r-1)*5;
		res += (c-1)*2;
		cout << res << endl;
	} else {
		r--;
		ll res = (r-1)*5;
		res += (c-1)*2;
		res++;
		cout << res << endl;
	}
	return 0;
}

