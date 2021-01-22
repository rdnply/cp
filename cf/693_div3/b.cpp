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
		int cnt1 = 0, cnt2 = 0;
		forn(i, n) { 
			cin >> a[i];
			if(a[i] == 1) cnt1++;
			else cnt2++;
		}

		if((cnt1 + 2*cnt2) % 2 != 0) {
			cout << "NO" << endl;
		} else {
			int sum = (cnt1 + 2*cnt2) / 2;
			if(sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}

