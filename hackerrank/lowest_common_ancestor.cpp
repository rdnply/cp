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

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
Node *lca(Node *root, int v1,int v2) {
	while(root != NULL) {
		if(root->data > v1 && root->data > v2)
			root = root->left;
		else if(root->data < v1 && root->data < v2)
		else root = root->right;

		break;
	}

	return root;
}
 

int main() {

	return 0;
}

