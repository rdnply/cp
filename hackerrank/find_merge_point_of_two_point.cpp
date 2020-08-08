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

int count(SinglyLinkedListNode* head) {
	int cnt = 0;

	SinglyLinkedListNode* curr = head;
	while(curr) {
		curr = curr->next;
		cnt++;
	}

	return cnt;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
	int cnt1 = count(head1);
	int cnt2 = count(head2);

	if(cnt1 > cnt2) {
		for(int i = 0; i < cnt1-cnt2; i++)
			head1 = head1->next;
	} else {
		for(int i = 0; i <cnt2-cnt1; i++)
			head2 = head2->next;
	}

	while(head1 != head2) {
		head1 = head1->next;
		head2 = head2->next;
	}

	return head1->data;
}

int main() {

	return 0;
}

