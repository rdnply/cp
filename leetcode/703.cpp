#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define PI acos(-1)
#define EPS 1e-5
#define sz(v) ((int)(v).size())
#define all(v) v.begin(),v.end()
#define forn(i, n) for(ll i=0;i<(ll)n;i++)
#define fi first
#define se second
 
// class KthLargest {
// 	private:
// 		int K;
// 		vector<int> h;
// 
// 	public:
// 		KthLargest(int k, vector<int>& nums) {
// 			K = k;
// 			h = nums;
// 			make_heap(h.begin(), h.end());
// 		}
// 
// 		int add(int val) {
// 			h.push_back(val);
// 			push_heap(h.begin(), h.end());
// 
// 			vector<int> elems;
// 			int num = K-1;
// 			while(num--) {
// 				elems.push_back(h.front());
// 				pop_heap(h.begin(), h.end());
// 				h.pop_back();
// 			}
// 				
// 			for(int i : elems)
// 				cout << i << " ";
// 			cout << endl;
// 			int kth = h.front();
// 
// 			for(int i : elems) {
// 				h.push_back(i);
// 				push_heap(h.begin(), h.end());
// 			}
// 
// 			return kth;
// 		}
// };

class KthLargest {
	private:
		vector<int> h;
		int kth_max;
	public:
		KthLargest(int k, vector<int>& nums) {
			h.resize(min(k, (int)nums.size()));

			sort(nums.begin(), nums.end());
			for(int i = 0; i < k && i < (int)nums.size(); i++) {
				h[i] = nums[nums.size()-1-i];
			}

			if(k > (int)nums.size())
				kth_max = -1e9;
			else
				kth_max = h.back();
		}

		int add(int val) {
			if(val < kth_max) {
				return kth_max;
			}
			if(kth_max == -1e9)		
				h[0] = val;
			else
				h.back() = val;
			int i = h.size()-1;

			while(i > 0 && h[i] > h[i-1]) {
				swap(h[i], h[i-1]);
				i--;
			}

			kth_max = h.back();

			return kth_max;
		}
};

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> nums(n);
	forn(i, n) cin >> nums[i];
	KthLargest kth(k, nums);
	cout <<	kth.add(3) << endl;
	kth.add(5);
	kth.add(10);
	kth.add(9);
	cout <<	kth.add(4) << endl;
	return 0;
}

