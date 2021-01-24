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
		vector<int> a(n);
		forn(i, n) cin >> a[i];
		if(n == 2) {
			cout << abs(a[0] - a[1]) << endl;
			continue;
		}
		sort(all(a));
		int mn = 1e9;
		for(int i = 1; i < n; i++) {
			mn = min(mn, abs(a[i-1] - a[i]));	
		}
		cout << mn << endl;
	}
	return 0;
}

