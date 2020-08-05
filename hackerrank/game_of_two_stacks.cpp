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
	int g;
	cin >> g;
	while(g--) {
		int n, m, x;
		cin >> n >> m >> x;
		vector<int> a(n), b(m);
		forn(i, n) cin >> a[i];
		forn(i, m) cin >> b[i];
		
		int i, j, k;
		i = j = k = 0;
		int sum = 0;
		int mx = 0;
		while(sum + a[i] <= x && i < n) {
			sum += a[i++];
			mx++;
		}

		while(i > -1 && j < m) {
			sum += b[j++];
			while(sum > x && i > 0) {
				sum -= a[--i];
			}

			if(sum <= x) {
				mx = max(mx, i+j);
			}
		}

		cout << mx << endl;
	}

	return 0;
}

