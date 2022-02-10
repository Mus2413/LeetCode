class Solution {
public:
    int findComplement(int x) {
        string a;
        while(x!=0)
        {
            a+=to_string(x%2);
            x=x/2;
        }
        cout<<a<<endl;
        for(int i=0;i<a.size();i++)
        {
            int x=(a[i]-'0');
            a[i]=(1-x)+'0';
        }
        cout<<a<<endl;
        int n=a.size();
        int ans=0,i=n-1;
        while(n>0)
        {
            cout<<a[i]<<endl;
            int x=a[i]-'0';
            cout<<x<<" ";
            ans+=pow(2,n-1)*x;
            i--;
            n--;
        }
        return ans;
        
    }
};