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

const int INF = 1e9;
 
bool BSTUtil(Node* root, int min, int max) {
	if(root == NULL) {
		return true;
	}

	if(root->data < min || root->data > max)
		return false;

	return BSTUtil(root->left, min, root->data-1) &&
		   BSTUtil(root->right, root->data+1, max);
}

bool checkBST(Node* root) { 
	return BSTUtil(root, -INF, INF);
}

int main() {

	return 0;
}

