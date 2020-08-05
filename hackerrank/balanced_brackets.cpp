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
 
bool isBalanced(string s) {
	stack<char> st;
	forn(i, sz(s)) {
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			st.push(s[i]);
		else {
			if (sz(st) == 0)
				return false;

			char t = st.top();
			if(s[i] == ')' && t != '(')
				return false;
			if(s[i] == '}' && t != '{')
				return false;
			if(s[i] == ']' && t != '[')
				return false;
			st.pop();
		}
	}

	return st.empty()?true:false;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		cout << (isBalanced(s)?"YES":"NO") << endl;
	}
	return 0;
}

