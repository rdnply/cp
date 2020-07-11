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
	int x, n;
	cin >> x >> n;
	vector<int> p(n);
	map<int,int> m;
	for(int i = 0; i < n; i++) {
		cin >> p[i];
		m[abs(x-p[i])]++;
	}
	if(m[0] == 0) {
		cout << x << endl;
		return 0;
	}
	for(int i = 1; i <= 100; i++) {
		if(m[i] < 2) {
			if(count(all(p), x-i) == 0)
				cout << x-i << endl;
			else cout << x+i << endl;
			break;
		}
	}
	return 0;
}

