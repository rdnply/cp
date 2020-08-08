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
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* a, SinglyLinkedListNode* b) {
	SinglyLinkedListNode* result = nullptr;

	if(a == nullptr)
		return b;
	if(b == nullptr)
		return a;

	if(a->data <= b->data) {
		result = a;
		result->next = mergeLists(a->next, b);
	} else {
		result = b;
		result->next = mergeLists(a, b->next);
	}

	return result;
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* a, SinglyLinkedListNode* b) {
	if(!a)
		return b;
	if(!b)
		return a;

	if(a->data < b->data) {
		a->next = mergeLists(a->next, b);
		return a;
	} else {
		b->next = mergeLists(a, b->next);
		return b;
	}
}

SinglyLinkedListNode* mergeUtil(SinglyLinkedListNode* a, SinglyLinkedListNode* b) {
	if(!a->next) {
		a->next = b;
		return a;
	}

	SinglyLinkedListNode *curr1=a, *next1=a->next;
	SinglyLinkedListNode *curr2=b, *next2=b->next;

	while(next1 && curr2) {
		if(curr2->data >= curr1->data && curr2->data <= next1->data) {
			next2 = curr2->next;
			curr1->next = curr2;
			curr2->next = next1;

			curr1 = curr2;
			curr2 = next2;
		} else if(next1->next) {
			next1 = next1->next;
			curr1 = curr1->next;
		} else {
			next1->next = curr2;
			return a;
		}
	}

	return a;
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* a, SinglyLinkedListNode* b) {
	if(!a)
		return b;
	if(!b)
		return a;

	if(a->data < b->data)
		return mergeUtil(a, b);
	else 
		return mergeUtil(b, a);
}



int main() {

	return 0;
}

