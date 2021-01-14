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
		vector<int> a(n), b(n);
		forn(i, n) {
			cin >> a[i];
		}
		forn(i, n) {
			cin >> b[i];
		}
		int mna = *min_element(all(a));
		int mnb = *min_element(all(b));
		ll cnt = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] == mna) {
				cnt += b[i] - mnb;
			} else if(b[i] == mnb) {
				cnt += a[i] - mna;
			} else {
				int c = min(a[i]-mna, b[i]-mnb); 
				cnt += c;
				a[i] -= c;
				b[i] -= c;	
				cnt += a[i] -mna;
				cnt += b[i] -mnb;
			}	
		}
		cout << cnt << endl;
	}
	return 0;
}

