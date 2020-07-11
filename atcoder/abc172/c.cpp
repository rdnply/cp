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
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> a(n+1), b(m+1);
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) cin >> b[i];
	for(int i = 2; i <= n; i++) a[i] += a[i-1];
	for(int i = 2; i <= m; i++) b[i] += b[i-1];
	int ans = 0, j = m;
	for(int i = 1; i <= n; i++) {
		if (a[i] > k) break;
		while(b[j] > k - a[i]) j--;
		ans = max(ans, i+j);	
	}
	cout << ans << endl;	
	return 0;
}

