class Solution {
public:
    bool canConstruct(string r, string m) {
        int count[26]={0};
        for(char ch:m){
            count[ch-'a']++;
        }
        for(char ch:r){
            if(count[ch-'a']--<=0) return false;
        }
        return true;
    }
};