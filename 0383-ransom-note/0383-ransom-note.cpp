class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //unordered_map<char, int> map2;
        unordered_map<char, int> map1;
        //int n1 = ransomNote.size();
        //int n2 = magazine.size();
        for(char c: magazine){
            map1[c]++;
        }
        
        for(char c: ransomNote){
            if(map1[c] == 0){
                return false;
            }
            map1[c]--;
        }
        return true;
    }
};