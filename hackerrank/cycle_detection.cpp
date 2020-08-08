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
bool has_cycle(SinglyLinkedListNode* head) {
	if(head == nullptr)
		return false;

	while(head) {
		if(head->data == -999)
			return true;
		head->data = -999;
		head = head->next;
	}

	return false;
}

bool has_cycle(SinglyLinkedListNode* head) {
	SinglyLinkedListNode* slow = head;
	SinglyLinkedListNode* fast = head;

	while(slow && fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
			return 1;
	}

	return 0;
}

int main() {

	return 0;
}

