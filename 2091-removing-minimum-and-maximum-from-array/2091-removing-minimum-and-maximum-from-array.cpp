class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxu = -1;
        int minu = -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i] > maxi) {
                maxi = max(maxi, nums[i]);
            }
            if(nums[i] < mini){
                mini = min(mini, nums[i]);
            }
        }
        for(int i =0; i<n; i++){
            if(nums[i] == maxi){
                maxu = i;
            }
            if(nums[i] == mini){
                minu = i;
            }
        }
        if(n == 1) return 1;
        int x;
        int front = max(minu, maxu) + 1;
        int last = (n- min(maxu, minu));
        if(minu > maxu){
            x = (maxu+1) + (n-minu);
        }
        else if(maxu > minu){
            x = (minu+1) + (n-maxu);
        }
        return min({front, last, x});
    }
};