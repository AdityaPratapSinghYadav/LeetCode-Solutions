class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l=0;
        int r=n-1;
        int mArea = 0;
        while(l < r){
            if(height[l]>height[r]){
                mArea = max(mArea, (min(height[l], height[r]))*(r-l));
                r--;
            }
            else if(height[r]>=height[l]){
                mArea = max(mArea, (min(height[l], height[r]))*(r-l));
                l++;
            }
        }
        return mArea;
    }
};