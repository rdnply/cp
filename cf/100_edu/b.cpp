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
		vector<ll> a(n);
		ll odd = 0, even = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(i % 2 == 0) even += a[i];
			else odd += a[i];
		}
		if(odd > even) {
			forn(i, n) {
				cout << (i % 2 == 0? 1: a[i]) << " ";
			}
		} else {
			forn(i, n) {
				cout << (i % 2 == 0? a[i]: 1) << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

