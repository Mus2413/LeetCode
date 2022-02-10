class Solution {
public:
     string licenseKeyFormatting(string s, int k) {
        
        string ans = "";
        int count = 0;
        
        for(int i = s.size()-1; i>=0; i--){
            
            if(s[i] == '-')continue;
            
            if(s[i]>= 'a' and s[i]<='z'){
                ans.push_back(s[i] - 'a' + 'A');
            }
            
            else{
                ans.push_back(s[i]);
            }
            
            count++;
            
            if(count%k == 0){
                ans.push_back('-');
            }
        }
        
        if(ans.back() == '-'){
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};