class Solution {
public:
    vector<vector<int>>dp;
    bool isMatch(string s, string p) {
        dp.resize(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(s,p,0,0);
    }
    
    bool solve(string &s,string &p,int i,int j){
        if(i>=s.size() && j>=p.size()) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        if(j+1<p.size() && p[j+1]=='*'){
            return dp[i][j]=( ( i<s.size()&&(s[i]==p[j] || p[j]=='.')&&(solve(s,p,i+1,j))) || solve(s,p,i,j+2));           
        }else if(i<s.size() && j<p.size() && (s[i]==p[j] || p[j]=='.')){                // if s[i] and p[j] are equal or p[j] is .
            return dp[i][j]=solve(s,p,i+1,j+1);               
        }
        return dp[i][j]=false;
    }
};