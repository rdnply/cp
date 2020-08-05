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
	int n;
	cin >> n;
	vector<int> h(n);
	forn(i, n) cin >> h[i];
	stack<int> st;
	int sq = 0;
	int i = 0;
	while(i < n) {
		if(st.empty() || h[i] >= h[st.top()]) {
			st.push(i++);
		} else {
			int tp = st.top();
			st.pop();
			int add = h[tp] * (st.empty()?i:(i-st.top()-1));
			sq = max(sq, add);
		}
	}

	while(!st.empty()) {
		int tp = st.top();
		st.pop();
		int add = h[tp]*(st.empty()?i:(i-st.top()-1));
		sq = max(sq, add);
	}
	cout << sq << endl;
	return 0;
}

