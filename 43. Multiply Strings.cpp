class Solution {
public:
    string multiply(string nums1, string nums2) {
        vector<string>v;
        if(nums1=="0" || nums2=="0")
            return "0";
        reverse(nums2.begin(),nums2.end());
        reverse(nums1.begin(),nums1.end());
        string s;
        int carry=0;
        int size=0;
        for(int i=0;i<nums2.size();i++)
        {
            s="";
            for(int k=0;k<i;k++)
                s+="0";
            carry=0;
            for(int j=0;j<nums1.size();j++)
            {
                int x=nums2[i]-'0';
                int y=nums1[j]-'0';
                int ans=x*y + carry;
                s+= to_string(ans%10) ;
                ans=ans/10;
                carry=ans;
            }
            if(carry!=0)
                s+=to_string(carry) ;
            
            if(size<s.size())
                size=s.size();
            v.push_back(s);
            //cout<<s<<endl;
            
        }
        //cout<<size<<endl;
        carry=0;
        s="";
        int x=0;
        for(int i=0;i<size;i++)
        {
            x=0;
            for(int j=0;j<v.size();j++)
            {
               // cout<<" j= "<<j;
                if(i<v[j].size())
                {
                    x+=v[j][i]-'0';
                    
                }
            }
            
            x+=carry;
            s+=to_string(x%10);
            x=x/10;
            carry=x;
        }
        if(carry!=0)
            s+=to_string(carry) ;
        reverse(s.begin(),s.end());
        return s;
        
    }
};