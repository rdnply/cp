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
		int n;
		cin >> n;
		map<int, pii> m;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			m[x].first++;
			m[x].second = i+1;
		}
		int res = -1;
		for(auto [k, v]: m) {
			if(v.first==1) {
				res = v.second;
				break;	
			}
		}
		cout << res << endl;
	}	
	return 0;
}

