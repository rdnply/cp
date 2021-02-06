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

int get(set<int>& x, multiset<int>& len) {
	if(sz(len) == 0) return 0;

	return *x.rbegin() - *x.begin() - *len.rbegin();
}
 
void add(int p, set<int>& x, multiset<int>& len) {
	x.insert(p);
	auto it = x.find(p);
	int prv = -1, nxt = -1;
	if(it != x.begin()) {
		it--;
		len.insert(p - *it);
		prv = *it;
		it++;
	}
	it++;
	if(it != x.end()) {
		len.insert(*it - p);
		nxt = *it;
	}

	if(prv != -1 && nxt != -1) {
		len.erase(len.find(nxt - prv));
	}
}

void rem(int p, set<int>& x, multiset<int>& len) {
	auto it = x.find(p);
	int prv = -1, nxt = -1;
	if(it != x.begin()) {
		it--;
		len.erase(len.find(p - *it));
		prv = *it;
		it++;
	}
	it++;
	if(it != x.end()) {
		len.erase(len.find(*it - p));
		nxt = *it;
	}
	x.erase(p);
	
	if(prv != -1 && nxt != -1) {
		len.insert(nxt - prv);
	}
}

int main() {
	int n, q;
	cin >> n >> q;
	set<int> x;
	multiset<int> len;
	for(int i = 0; i < n; i++) {
		int p;
		cin >> p;
		add(p, x, len);
	}

	cout << get(x, len) << endl;
	for(int i = 0; i < q; i++) {
		int t, v;
		cin >> t >> v;
		if(t == 0) {
			rem(v, x, len);	
		} else {
			add(v, x, len);
		}
		cout << get(x, len) << endl;
	}
	return 0;
}

