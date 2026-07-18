class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int cnt=0;
        int lastS=INT_MIN;
        int longest = 0;
        for(int i=0; i<n; i++){
            if(nums[i]-1 == lastS){
                cnt += 1;
                lastS = nums[i];
            } 
            else if(nums[i] != lastS){
                cnt=1;
                lastS = nums[i];
            } 
            longest = max(longest, cnt);
        }
        return longest;
    }
};