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

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
// iterative
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
	SinglyLinkedListNode* curr = head;
	SinglyLinkedListNode *prev = nullptr, *next = nullptr;

	while(curr != nullptr) {
		next = curr->next;

		curr->next = prev;

		prev = curr;
		curr = next;
	}

	head = prev;

	return head;
}

// recursion
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
	if(head == nullptr || head->next == nullptr)
		return head;

	SinglyLinkedListNode* rest = reverse(head->next);

	head->next->next = head;
	head->next = nullptr;

	return rest;
}

void reverseUtil(SinglyLinkedListNode* curr, SinglyLinkedListNode* prev, SinglyLinkedListNode* head) {
	if(curr->next == nullptr) {
		head = curr;
		curr->next = prev;

		return;
	}

	SinglyLinkedListNode* next = curr->next;
	curr->next = prev;

	reverseUtil(next, curr, head);
}
// tail recursion
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
	if(!head)
		return head;

	reverseUtil(head, nullptr, head);

	return head;
}

int main() {

	return 0;
}
