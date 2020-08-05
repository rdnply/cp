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
	int q;
	cin >> q;
	string s;
	stack<string> st;
	while(q--) {
		int type;
		cin >> type;
		if(type == 1) {
			string t;
			cin >> t;
			if(sz(st) && s != st.top())
				st.push(s);
			else if(sz(st) == 0) st.push(s);
			s += t;	
		} else if(type == 2) {
			int k;
			cin >> k;
			if(sz(st) && s != st.top())
				st.push(s);
			else if(sz(st) == 0) st.push(s);
			forn(i, k) {
				s.pop_back();
			}
		} else if(type == 3) {
			int k;
			cin >> k;
			cout << s[k-1] << endl;
		} else {
			s = st.top();
			st.pop();
		}
	}
	return 0;
}

