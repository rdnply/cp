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

int main() {

	return 0;
}

