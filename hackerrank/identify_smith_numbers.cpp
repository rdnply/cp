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
 
ll sumFactors(ll n) {
	ll res = 0;
	while(n%2==0) {
		res += 2;
		n /= 2;
	}

	for(int i = 3; i <= sqrt(n); i+=2) {
		while(n%i ==0) {
			string t = to_string(i);
			forn(j, sz(t)) res += t[j]-'0';
			n = n/i;
		}
	}
	if(n>2) {
		string t = to_string(n);
		forn(j, sz(t)) res += t[j]-'0';
	}


	return res;
}

int main() {
	ll n;
	cin >> n;
	ll sum = 0;
	string s = to_string(n);
	for(int i = 0; i < sz(s); i++) {
		sum += s[i]-'0';
	}
	if(sum == sumFactors(n))
		cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}

