class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
        int ans=0;
        for(int i=0;i<columnTitle.size();i++)
        {
            int x=columnTitle[i]-'A'+1;
            ans+=pow(26,i)*x;
        }
        return ans;
    }
};