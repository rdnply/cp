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
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
	DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
	if(!head) {
		head = newNode;
		return head;
	} else if(data < head->data) {
		newNode->next = head;
		head->prev = newNode;
		return newNode;
	} else {
		DoublyLinkedListNode* n1 = nullptr;
		DoublyLinkedListNode* n2 = head;
		while(n2 != nullptr && n2->data < data) {
			n1 = n2;
			n2 = n2->next;
		}

		if(n2 == nullptr) {
			n1->next = newNode;
			newNode->prev = n1;
		} else {
			n1->next = newNode;
			n2->prev = newNode;
			newNode->prev = n1;
			newNode->next = n2;
		}
	}

	return head;
}

int main() {

	return 0;
}

