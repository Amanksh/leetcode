1class Solution {
2public:
3    int minRemoval(vector<int>& nums, int k) {
4        sort(nums.begin() , nums.end());
5        if(nums.size() == 1) return 0;
6        int ans = INT_MIN;
7        for(int i = 0 ; i < nums.size() -1 ;i++){
8            int left = i+1 , right = nums.size() -1;
9            while(left <= right){
10                int mid = (left + right) / 2;
11                if(nums[mid] <= (long long)nums[i] * k){
12                    ans = max(ans ,mid - i +1 );
13                    left =mid + 1;
14                }else{
15                    right = mid -1;
16                }
17            }
18        }
19        if(ans == INT_MIN) return nums.size()  -1;
20        return nums.size() - ans;
21    }
22};