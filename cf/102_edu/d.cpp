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
 
void print(vector<int> a) {
	for(auto i: a) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		vector<int> sul(1, 0), sur(1, 0);
		for(int i = n-1; i >= 0; i--) {
			int d = s[i] == '+' ? 1: -1;
			sul.pb(min(0, sul.back() + d));
			sur.pb(max(0, sur.back() + d));
		}
		reverse(all(sul));
		reverse(all(sur));
		vector<int> prl(1, 0), prr(1, 0), pr(1, 0);
		forn(i, n) {
			int d = s[i] == '+'? 1: -1;
			pr.pb(pr.back() + d);
			prl.pb(min(prl.back(), pr.back()));
			prr.pb(max(prr.back(), pr.back()));
		}
		forn(i, m) {
			int l, r;
			cin >> l >> r;
			l--;
			int l1 = prl[l], r1 = prr[l];
			int l2 = sul[r] + pr[l], r2 = sur[r] + pr[l];
			cout << max(r1, r2) - min(l1, l2) + 1 << endl;
		}
	}
	return 0;
}

