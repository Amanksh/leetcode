1class Solution {
2public:
3    int minimumDifference(vector<int>& nums, int k) {
4        sort(nums.begin() , nums.end());
5        int ans = INT_MAX;
6        int minVal = INT_MAX;
7        int maxVal = INT_MIN;
8        int s = 0;
9        for(int i = 0 ; i < nums.size() ;i++){
10            if((i - s + 1) < k){
11                continue;
12            }
13            ans = min(ans , nums[i] - nums[s]);
14            s++;
15
16        }
17        return ans;
18    }
19};