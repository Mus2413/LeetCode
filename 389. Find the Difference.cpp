class Solution {
public:
    char findTheDifference(string s, string t) {
          int ss=0,tt=0;
        for(int i=0;i<t.size();i++)
        {
            if(i<s.size())
                ss+=s[i];
                tt+=t[i];
        }
        return tt-ss;
    }
};