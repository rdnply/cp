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
 
// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
	if(head == nullptr) {
		return;
	}

	stack<int> s;
	while(head != nullptr) {
		s.push(head->data);
		head = head->next;
	}

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
}

// recursion
void reversePrint(SinglyLinkedListNode* head) {
	if(head == nullptr)
		return;
	reversePrint(head->next);
	cout << head->data << endl;
}


int main() {

	return 0;
}

