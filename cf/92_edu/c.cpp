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
 
int calc(string s, int x, int y) {
	int res = 0;
	for(auto c: s) if(c-'0' == x) {
		res++;
		swap(x, y);
	}
		
	if(x != y && res % 2 != 0) {
		res--;
	}

	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int ans = 0;
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				ans = max(ans, calc(s, i, j));
			}
		}
		cout << sz(s) - ans << endl;
	}
	return 0;
}

