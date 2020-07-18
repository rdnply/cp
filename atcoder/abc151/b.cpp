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
	int n, k, m;
	cin >> n >> k >> m;
	int sum = 0;
	forn(i, n-1) {
		int x;
		cin >> x;
		sum += x;
	}
	forn(i, k+1) {
		if((sum+i)/n >= m) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}

