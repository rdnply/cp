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
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
	if(head == nullptr || head->next == nullptr) {
		return head;
	}
	
	SinglyLinkedListNode* curr = head;

	while(curr->next) {
		if(curr->data == curr->next->data) {
			curr->next = curr->next->next;
		} else {
			curr = curr->next;
		}
	}

	return head;
}


int main() {

	return 0;
}

