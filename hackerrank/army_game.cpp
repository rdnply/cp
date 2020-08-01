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
 
int gameWithCells(int n, int m) {
	int total;
	if(n%2==0 && m%2==0) {
		total = n*m/4;
	} else if(n%2!=0 && m%2==0) {
		total = (n-1)*m/4;
		total += m/2;
	} else if(n%2==0 && m%2!=0) {
		total = n*(m-1)/4;
		total += n/2;
	} else {
		total = (n-1)*(m-1)/4;
		total += n/2;
		total += m/2;
		total++;
	}	

	return total;
}

int main() {
	int n, m;
	cin >> n >> m;
	cout << gameWithCells(n, m) << endl;

	return 0;
}

