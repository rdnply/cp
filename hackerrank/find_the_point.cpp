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

vector<int> findPoint(int px, int py, int qx, int qy) {
	int dx = qx-px;
	int dy = qy-py;

	return vector<int>{px+2*dx, py+2*dy};
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		int px,py,qx,qy;
		cin >> px >> py >> qx >> qy;
		auto res = findPoint(px,py,qx,qy);
		cout << res[0] << " " << res[1] << endl;
	}

	return 0;
}

