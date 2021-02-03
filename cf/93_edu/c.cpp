#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
		string s;
		cin >> s;
		vector<int> sum(n+1);
		sum[0] = 0;
		sum[1] = s[0] - '0';
		for(int i = 2; i < n+1; i++) {
			sum[i] += sum[i-1] + (s[i-1] - '0');
		}
		int ans = count(all(s), '1');
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) {
				if(sum[i+1] - sum[j] == (i+1-j)) {
					ans++;
				}	
			}
		}
		cout << ans << endl;
	}
	return 0;
}
