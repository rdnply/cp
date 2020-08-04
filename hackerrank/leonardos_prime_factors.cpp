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

const int N = 1e6+19;
 
int primeCount(ll n, vector<char>& prime) {
	int cnt = 0;
	ll mul = 1;
	for(ll i = 2; i < N; i++) {
		if(prime[i] && mul*i <= n) {
			mul *= i;
			cnt++;
		} else if(mul*i > n){
			break;
		}
	}

	return cnt;
}

int main() {
	int q;
	cin >> q;
	
	vector<char> prime(N, true);
	prime[0] = prime[1] = false;
	for(int i = 2; i < N; i++) {
		if(prime[i]) {
			for(int j = i*2; j < N; j+=i) {
				prime[j] = false;
			}
		}
	}

	while(q--) {
		ll n;
		cin >> n;
		cout << primeCount(n, prime) << endl;
	}
	return 0;
}

