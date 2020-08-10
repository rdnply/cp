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
 
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

void fillMap(Node* root, int d, int l, map<int,pair<int, int>>& m) {
	if(root == NULL)
		return;

	if(m.count(d) == 0) {
		m[d] = {root->data, l};
	} else if(m[d].second > l)
		m[d] = {root->data, l};

	fillMap(root->left, d-1, l+1, m);
	fillMap(root->right, d+1, l+1, m);	
}

void topView(Node* root) {
	map<int, pair<int, int>> m;

	fillMap(root, 0, 0, m);

	for(auto it = m.begin(); it != m.end(); it++)
		cout << it->second.first << " ";
}

int main() {

	return 0;
}

