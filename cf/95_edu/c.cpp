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
		int cnt = 0;
		if(a[0] == 1) cnt++;
		for(int i = 1; i < n; i++) {
			if(a[i] == 1) {
				int j = i;
				int k = 0;
				while(j < n && a[j] == 1) {
					k++;
					j++;
				}
				cnt += k/3;
				i = j;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

