#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
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
		int n;
		cin >> n;
		string s;
		cin >> s;
		string a, b;
		bool find = false;
		forn(i, n) {
				if(s[i] == '2' && !find) a+='1', b+='1';
				else if(s[i] == '2' && find) a+='0', b+='2';
				else if(s[i] == '1' && !find) a+='1', b+='0', find=true;
				else if(s[i] == '1' && find) a+='0', b+='1';
				else a+='0', b+='0';
		}
		cout << a << "\n" << b << "\n";
	}
	return 0;
}

