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
		forn(i , n) cin >> a[i];
		bool ok = false;
		for(int i = 1; i < n-1; i++) {
			bool l = false, r = false;
			int indl = 0, indr = 0;
			for(int j = i-1; j >= 0; j--) {
				if(a[j] < a[i]){
				   	l = true;
					indl = j;
				}
			}
			for(int j = i+1; j < n; j++) {
				if(a[j] < a[i]){
				   	r = true;
					indr = j;
				}
			}
			if(l && r) {
				ok = true;
				cout << "YES" << endl;
				cout << indl+1 << " " << i+1 << " " << indr+1 << endl;
				break;
			}
		}
		if(!ok) cout << "NO" << endl;
	}
	return 0;
}

