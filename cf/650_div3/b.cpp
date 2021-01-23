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
		int cnt0 = 0, cnt1 = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] % 2 == 0 && i % 2 != 0) {
				cnt0++;
			} else if(a[i] % 2 != 0 && i % 2 == 0) {
				cnt1++;
			}
		}
		if(cnt0 == cnt1) {
			cout << cnt0 << endl;	
		} else cout << -1 << endl;
	}
	return 0;
}

