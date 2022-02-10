class Solution {
public:
    int hammingDistance(int x, int y) {
        string a,b;
        while(x!=0)
        {
            a+=to_string(x%2);
            x=x/2;
        }
        while(y!=0)
        {
            b+=to_string(y%2);
            y=y/2;
        }
        if(a.size()>b.size())
        {
            int diff=a.size()-b.size();
            while(diff!=0)
            {
                b+="0";
                diff--;
            }
        }
        else
        {
            int diff=b.size()-a.size();
            while(diff!=0)
            {
                a+="0";
                diff--;
            }
        }
        int count=0;
        for(int i=0;i<a.length()&& i<b.length();i++)
        {
            if(a[i]!=b[i])
                count++;
        }
        return count;
    }
};