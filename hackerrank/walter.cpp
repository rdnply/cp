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
 
const int N = 1e6+5;

int main() {
	int n, m;
	cin >> n >> m;
	stack<int> s1, s2, s3;
	forn(i, n) {
		int x;
		cin >> x;
		s1.push(x);
	}
	vector<char> prime(N, true);
	vector<int> pr;
	prime[0] = prime[1] = false;
	for(int i = 2; i < N; i++) {
		if(prime[i]) {
			pr.pb(i);
			for(int j = 2*i; j < N; j+=i)
				prime[j] = false;
		}
	}


	forn(q, m) {
		if(s1.empty())
			break;
		while(!s1.empty()) {
			int t = s1.top();
			if(t % pr[q] == 0) {
				s2.push(t);
			} else s3.push(t);
			s1.pop();
		}	
		while(!s2.empty()) {
			cout << s2.top() << endl;
			s2.pop();
		}

		s1 = s3;
		while(!s3.empty()) {
			s3.pop();
		}
	}
	while(!s1.empty()) {
		cout << s1.top() << endl;
		s1.pop();
	}
	return 0;
}
