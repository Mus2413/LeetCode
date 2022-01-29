class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        ans[0]=0;
        if(n==0)
        {
            return ans;
        }
        ans[1]=1;
        if(n==1)
        { 
            return ans;
        }
        
        for(int i=2;i<=n;i++)
        {
            float j=(log2(i));
            if(j-floor(j)==0)
            {
                ans[i]=1;
            }
            else
            {
                //cout<<j<<endl;
                int x=pow(2,int(j));
                //cout<<i<<" "<<x<<endl;
                ans[i]=ans[x]+ans[i-x];
            }
            
        }
        return ans;
        

    }
};