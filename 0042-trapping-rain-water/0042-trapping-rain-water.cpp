class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pm(height.size());
        vector<int> sm(height.size());
        pm[0]=height[0];
        sm[height.size()-1]=height[height.size()-1]; 
        for(int i=1; i<=height.size()-1 ; i++){
            pm[i]=max(pm[i-1],height[i]);
        }
        for(int i=height.size()-2; i>=0; i--){
            sm[i]=max(sm[i+1],height[i]);
        }
        int c=0;
        for(int i=0; i<height.size(); i++){
            if(height[i]<pm[i] && height[i]<sm[i]){
                c += min(pm[i],sm[i])-height[i];
            }
        }
        return c;
    }
};