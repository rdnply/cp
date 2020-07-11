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
	vector<int> a(n);
	map<int, int> m;
	ll cursum = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cursum += x;
		m[x]++;
	}
	int q;
	cin >> q;
	while(q--) {
		int b, c;
		cin >> b >> c;
		int num = m[b];
		m[b] = 0;
		m[c] += num;
		cursum += (c-b)*num;
		cout << cursum << endl;
	}
	return 0;
}

