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

void levelOrder(Node * root) {
	if(root == NULL)
		return;

	queue<Node*> q;
	q.push(root);
	Node* temp = NULL;

	while(!q.empty()) {
		temp = q.front();
		q.pop();
		cout << temp->data << " ";

		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
}
 

int main() {

	return 0;
}

