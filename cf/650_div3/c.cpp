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
		string s;
		cin >> s;
		
		int res = 0;
		for(int i = 0; i < n;) {
			int j = i+1;
			for(; j < n && s[j] != '1'; j++);
		   	int left = s[i] == '1'? k : 0;
			int right = j < n && s[j] == '1'? k : 0;
			int len = j-i;
			
			if(left == k) {
				len--;
			}	
			len -= left+right;
			if(len > 0) {
				res += (len+k) / (k+1);
			}
			i=j;
		}
		cout << res << endl;
	}
	return 0;
}

