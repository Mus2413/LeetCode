class Solution {
public:
    int longestPalindrome(string s) {
         unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        int res=0;
        bool od=false; //For odd length palindrome 
        for(auto i:mp)
        {
            if(i.second>1)
            {
                 if(i.second%2==0)
                    res+=i.second;
                else
                {res+=i.second-1;od=true;}
            }
            else
                od=true;
        }
        if(od)
            return res+=1;
        return res;
        
    }
};