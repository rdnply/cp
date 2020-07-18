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
	int n;
	cin >> n;
	vector<int> p(n);
	forn(i, n) cin >> p[i];
	vector<int> q(n);
	forn(i, n) cin >> q[i];

	vector<int> a(n);
	forn(i, n) a[i] = i+1;
	int i = 1, ra = 0, rb = 0;
	while(next_permutation(all(a))) {
		if(p == a) ra = i;
		if(q == a) rb = i;
		i++;	
	}
	cout << abs(ra-rb) << endl;
	return 0;
}

