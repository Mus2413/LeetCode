class Solution {
public:
    string reverseVowels(string s) {
        string x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                x.push_back(s[i]);
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                x.push_back(s[i]);
        }
        reverse(x.begin(),x.end());
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                s[i]=x[j];
                j++;
            }
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=x[j];
                j++;
            }
        }
        return s;
        
    }
};