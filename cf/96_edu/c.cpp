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
		cout << 2 << endl;
		if(n == 2) {
			cout << 1 << " " << 2 << endl;
			continue;
		}
		vector<int> a(n);
		for(int i = 0; i < n; i++) a[i] = i+1;
		while(sz(a) >= 2) {
			auto b = prev(a.end());
			auto prev = b;	
			prev--;
			if((*b+*prev) % 2 == 0) {
				cout << *b << " " << *prev << endl;
				a.erase(b);
				a.erase(prev);
				a.pb((*b+*prev)/2);
			} else {
				prev--;
				cout << *b << " " << *prev << endl;
				a.erase(b);
				a.erase(prev);
				a.pb((*b+*prev)/2);
			}
		}
	}
	return 0;
}

