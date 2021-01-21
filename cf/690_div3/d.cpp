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
		ll sum = 0;
		forn(i, n) {
			cin >> a[i];
			sum += a[i];
		}

		int res;
		for(int i = n; i >= 1; i--) {
			if(sum % i == 0) {
				int needSum = sum / i;
				int curSum = 0;
				bool ok = true;
				for(int j = 0; j < n; j++) {
					curSum += a[j];
					if(curSum > needSum) {
						ok = false;
						break;
					} else if(curSum == needSum) {
						curSum = 0;
					}	
				}
				if(ok) {
					res = n-i;
					break;
				}
			}
		}

		cout << res << endl;
	}
	return 0;
}

