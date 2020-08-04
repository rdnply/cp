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

ll binpow(ll a, ll exp) {
	ll res = 1;
	while(exp) {
		if(exp&1) res *= a;
		exp >>= 1;
		a *= a;
	}

	return res;
}

bool ok(ll m, string d) {
	for(auto i : d) {
		if(i-'0' > m-1)
			return false;
	}

	return true;
}
 
ll dec(ll m, ll d) {
	string s = to_string(d);
	if(!ok(m, s)) return -1;
	int n = sz(s);
	ll res = 0;
	for(int i = 0; i < n; i++) {
		res += (s[n-1-i]-'0')*binpow(m, i);
	}

	return res;
}

int main() {
	int n;
	cin >> n;	
	map<ll, int> cnt;
	forn(i, n) {
		int m, d;
		cin >> m >> d;
		if(m > 12 || d > 31) continue;
		ll r = dec(m, d);
		cnt[r]++;
	}	

	ll ans = 0;
	for(auto i : cnt) {
		if(i.fi != -1) {
			ll t = i.se;
			ans += t*(t-1)/2;
		}
	}

	cout << ans << endl;
	return 0;
}

// python
// counts = [0]*100
// for i in range(int(input())):
//     m,d = map(int,input().split())
//     try:counts[int(str(d),m)]+=1
//     except:pass
// print(sum(c*(c-1)//2 for c in counts))
