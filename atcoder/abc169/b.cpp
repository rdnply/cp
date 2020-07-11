#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define PI acos(-1)
#define EPS 1e-5
#define sz(v) ((int)(v).size())
#define all(v) v.begin(),v.end()
#define forn(i, n) for(ll i=0;i<(ll)n;i++)
#define fi first
#define se second
 

int main() {
	int n;
	cin >> n;
	vector<ll> a(n);
	forn(i, n) cin >> a[i];
	if(count(all(a), 0) > 0) {
		cout << 0 << endl;
		return 0;
	}
	ll res = 1;
	forn(i, n) {
		if(a[i] <= 1000*1ll*1000*1000*1000*1000*1000/res)
			res *= a[i];
		else {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << res << endl;
	return 0;
}

