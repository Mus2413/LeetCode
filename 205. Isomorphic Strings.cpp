class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char>mp;
        int count=0;
        string a,b;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                char x='a'+count;
                a.push_back(x);
                mp[s[i]]=x;
                count++;
            }
            else
            {
                char x=mp[s[i]];
                a.push_back(x);
            }
        }
        mp.clear();
        count=0;
        for(int i=0;i<t.size();i++)
        {
            if(mp.find(t[i])==mp.end())
            {
                char x='a'+count;
                b.push_back(x);
                mp[t[i]]=x;
                count++;
            }
            else
            {
                char x=mp[t[i]];
                b.push_back(x);
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
        if(a==b)
            return true;
        else
            return false;
    }
};