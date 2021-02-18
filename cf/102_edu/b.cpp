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
	auto mul = [](string s, int k) -> string {
		string res;
		while(k--) res += s;
		return res;
	};

	int q;
	cin >> q;
	while(q--) {
		string s, t;
		cin >> s >> t;
		int n = sz(s), m = sz(t);
		int g = __gcd(n, m);
		if(mul(s, m/g) == mul(t, n/g)) 
			cout << mul(s, m/g) << endl;
		else cout << -1 << endl;
	}
	return 0;
}

