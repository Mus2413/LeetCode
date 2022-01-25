class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=s.size();
        int sz=words[0].size();
        map<string,int>freq;
        for(auto i:words)
        {
            freq[i]++;
        }
        vector<int>ans;
        for(int i=0;i<sz;i++)
        {
            vector<string>v;
            for(int j=i;j<n;j+=sz)
            {
                if(j+sz-1>n)
                    break;
                v.push_back(s.substr(j,sz));
            }
            map<string,int>tempfreq;
            int l=0,r=0;
            while(r<v.size())
            {
                tempfreq[v[r]]++;
                while(tempfreq[v[r]]>freq[v[r]])
                {
                    tempfreq[v[l]]--;
                    l++;
                }
                if(r-l+1 == words.size())
                {
                    ans.push_back(i+l*sz);
                }
                r++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};