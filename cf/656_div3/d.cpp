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
 
int calc(string s, char c) {
	if(sz(s) == 1) 
		return s[0] != c;

	int mid = sz(s)/2;
	int cntl = calc(string(s.begin(), s.begin() + mid), c+1);
	cntl += sz(s)/2 - count(s.begin() + mid, s.end(), c);
	int cntr = calc(string(s.begin() + mid, s.end()), c+1);
	cntr += sz(s)/2 - count(s.begin(), s.begin() + mid, c);
	return min(cntl, cntr);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << calc(s, 'a') << endl;	
	}
	return 0;
}

