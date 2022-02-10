class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string a="",c;
        for(int i=0;i<s.length()/2;i++) 
        {
            a+=s[i]; 
            c=a;
            if(s.length()%c.length()==0) 
            {
                int n=s.length()/c.length();
                while(n>1)
                {c+=a;n--;} 
                if(c==s)
                    return true;
            }
        }
        return false;
    }
};