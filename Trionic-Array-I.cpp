1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int i = 1;
5        int p = 0 , q= 0 , z = 0;
6            while(i < nums.size() && nums[i] > nums[i-1] ){
7                i++;
8                p = 1;
9            }
10            while(i < nums.size() && nums[i] < nums[i-1]){
11                i++;
12                q = 1;
13            }
14            while(i < nums.size() && nums[i] > nums[i-1]){
15                i++;
16                z = 1;
17            }
18        if(p && q && z && i == nums.size()){
19            return true;
20        }
21        return false;
22    }
23};