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
		int n, k;
		cin >> n >> k;
		vector<int> a(n), b(n), p(k);
		for(int i = 0; i < k; i++) {
			a[i] = i+1;
			b[i] = i+1;
		}
		for(int i = k, j = k-1; i < n; i++, j--) {
			a[i] = j;
			b[i] = j;
		}
		
		int cnt_inv = 0;
		for(int i = 0; i< n-1; i++) {
			if(a[i] > a[i+1]) cnt_inv++;
		}

		int mid_v = k-cnt_inv;
		b[n-1-cnt_inv] = mid_v;
		for(int i = 1; i <= cnt_inv; i++) {
			b[n-1-cnt_inv+i] = mid_v+i; 	
			b[n-1-cnt_inv-i] = mid_v+i; 	
		}
		for(int i = 0; i < k; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

