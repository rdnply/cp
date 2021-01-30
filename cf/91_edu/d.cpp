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
 
const int N = 2e5+10;
int n, m;
ll x, k, y;
int a[N];
int b[N];

bool upd(int l, int r, ll& res) {
	if(l > r) return true;
	bool canDel = false;
	int mx = *max_element(a+l, a+r+1);
	int len = r-l+1;
	if(l-1 >= 0 && a[l-1] > mx) canDel = true;
	if(r+1 < n && a[r+1] > mx) canDel = true;
	if(len < k && !canDel) return false;

	int need = len %k;
	res += need * y;
	len -= need;

	if(y*k >= x) {
		res += len/k*x;
	} else if(canDel) {
		res += len*y;
	} else {
		res += (len-k)*y+x;
	}

	return true;
}

int main() {
	cin >> n >> m;
	cin >> x >> k >> y;
	forn(i, n) cin >> a[i];
	forn(i, m) cin >> b[i];

	ll res = 0;
	int lst = -1, posa = 0, posb = 0;
	while(posb < m) {
		while(posa < n && a[posa] != b[posb]) posa++;
		if(posa == n) {
			cout << -1 << endl;
			return 0;
		}
		if(!upd(lst+1, posa-1, res)) {
			cout << -1 << endl;
			return 0;
		}

		lst = posa;
		posb++;
	}

	if(!upd(lst+1, n-1, res)) {
		cout << -1 << endl;
	} else {
		cout << res << endl;
	}

	return 0;
}

