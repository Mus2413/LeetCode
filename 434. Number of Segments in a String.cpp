class Solution {
public:
    int countSegments(string s) {
         int i=0,n=s.length();
        int count=0;
        
        while(i<n&&s[i]==' ')
            i++;
        
        if(i==n)
            return 0;
        
        for(;i<n;)
        {
            if(s[i]==' ')
            {
                while(i<n&&s[i]==' ')
                    i++;
                count++;
            }
            else
                i++;
        }
        
        if(s[n-1]!=' ')
            count++;
        return count;
        
        
    }
};