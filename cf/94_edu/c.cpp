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
 
string s;
int x;

string f(string s) {
	string res = s;
	for(int i = 0; i < sz(s); i++) {
		if((i-x >= 0 && s[i-x] == '1') || (i+x < sz(s) && s[i+x] == '1'))
			res[i] = '1';
		else res[i] = '0';
	}

	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		cin >> x;
		int n = sz(s);
		string w = string(n, '1');
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				if(i-x >= 0) w[i-x] = '0';
				if(i+x < n) w[i+x] = '0';
			}
		}
		if(f(w) == s) {
			cout << w << endl;
		} else cout << -1 << endl;
	}
	return 0;
}

