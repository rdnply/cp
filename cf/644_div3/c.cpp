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
		int odd = 0, even = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i]%2) {
				odd++;
			} else even++;
		}
		if(odd % 2 == 0 && even % 2 == 0) {
			cout << "YES" << endl;
		} else {
			sort(all(a));
			bool ok = false;
			for(int i = 1; i < n; i++) {
				if(a[i]-a[i-1] == 1) {
					cout << "YES" << endl;
					ok = true;
					break;
				}
			}
			if(!ok)
				cout << "NO" << endl;
		}
	}
	return 0;
}

