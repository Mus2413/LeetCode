class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size()==0)
            return ans;
        long long int  st=nums[0];
        long long int  end=nums[0];
        
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-end<=1)
            {
                end=nums[i];
            }
            else
            {
                if(st==end)
                {
                    ans.push_back(to_string(st));
                }
                else
                {
                    string x=to_string(st);
                    x+="->";
                    x+=to_string(end);
                    ans.push_back(x);
                }
                st=nums[i];
                end=nums[i];
            }
        }
        if(st==end)
        {
            ans.push_back(to_string(st));
        }
        else
        {
            string x=to_string(st);
            x+="->";
            x+=to_string(end);
            ans.push_back(x);
        }
        return ans;
    }
};