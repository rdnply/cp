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
	int n;
	cin >> n;
	int mx, ans = 0;
	vector<int> a(n);
	forn(i, n) cin >> a[i];
	sort(all(a));
	mx = a.back();
	vector<char> pr(mx+1, true);
	for(int i = 0; i < n; i++) {
		if(pr[a[i]]) {
			for(int j = 1; j * a[i] <= mx; j++) {
				pr[a[i]*j] = false;
			}
			if(i == n-1 || a[i] != a[i+1]) ans++;
		}
	}
	cout << ans << endl;
}

