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
		string s;
		cin >> s;
		int cnt = 0, n = sz(s);
		set<int> close_round, close_square;
		for(int i = 0; i < n; i++) {
			if(s[i] == ')') close_round.insert(i);
			if(s[i] == ']') close_square.insert(i);
		}
		for(int i = 0; i < n; i++) {
			if(s[i] == '(') {
				auto it = close_round.upper_bound(i);
				if(it != close_round.end()) {
					cnt++;
					close_round.erase(it);
				}
			} else if(s[i] == '[') {
				auto it = close_square.upper_bound(i);
				if(it != close_square.end()) {
					cnt++;
					close_square.erase(it);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

