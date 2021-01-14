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
		vector<int> cnt(n+1);
		for(int i = 0; i < n; i++) {
			cnt[a[i]]++;
		}
		int mx = 0;
		for(int i = 2; i <= 2*n; i++) {
			int c = 0;
			for(int j = 1; j < (i+1)/2; j++) {
				if(i-j > n) continue;
				c += min(cnt[j], cnt[i-j]);
			}
			if(i % 2 == 0) {
				c += cnt[i/2]/2;
			}
			mx = max(mx, c);
		}
		cout <<  mx << endl;
	}
	return 0;
}

