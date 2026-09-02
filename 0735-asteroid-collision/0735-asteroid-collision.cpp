class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int> st;
        for(int i=0; i<=arr.size()-1; i++){
            if(arr[i]>0) st.push_back(arr[i]);
            else{
                while(!st.empty() && st.back() < abs(arr[i]) && st.back()>0) st.pop_back();
                
                if(!st.empty() && st.back() == abs(arr[i])) st.pop_back();
                else if(st.empty() || st.back()<0) st.push_back(arr[i]);
            }
        }
        return st;
    }
};