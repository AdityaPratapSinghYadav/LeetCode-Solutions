class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int cnte=0;
        int cnto=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2 == 0) cnte++;
            else cnto++;
        }
        if(cnte==n || cnto==n) return true;

        if(cnte >1) return true;
        if(cnto >1) return true;

        return true;
    }
};