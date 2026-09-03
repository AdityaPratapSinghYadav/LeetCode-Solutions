class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans = {0,0};
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==i) continue;
                if(nums[i] + nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        return ans;
    }
};