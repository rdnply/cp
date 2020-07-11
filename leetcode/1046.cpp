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
 
int lastStoneWeight(vector<int>& stones) {
	make_heap(stones.begin(), stones.end());
	while(stones.size() > 1) {
		int x = stones.front();
		pop_heap(stones.begin(), stones.end());
		stones.pop_back();
		int y = stones.front();
		pop_heap(stones.begin(), stones.end());
		stones.pop_back();

		if(x != y) {
			stones.push_back(abs(x-y));
			push_heap(stones.begin(), stones.end());
		}
	}

	int res = 0;

	if(stones.size() != 0)
		res = stones.front();

	return res;
}


int main() {
	int n;
	cin >> n;
	vector<int> stones(n);
	forn(i, n) cin >> stones[i];
	cout << lastStoneWeight(stones) << endl;
	return 0;
}

