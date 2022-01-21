class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                ans.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z')
            {
                int x=s[i]-'A';
                s[i]='a'+x;
                ans.push_back(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                ans.push_back(s[i]);
            }
        }
        string temp=ans;
        reverse(temp.begin(),temp.end());
        if(temp==ans)
            return true;
        else
            return false;
    }
};