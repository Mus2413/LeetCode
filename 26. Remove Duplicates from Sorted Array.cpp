class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n)
        {
            int j=i+1;
            while(j<n && nums[j]==nums[i]  )
            {
                nums[j]=200;
                j++;
                
            }
            i=j;
        }
         i=0;
        int j=0;
        while(i<n)
        {
            if(nums[i]==200)
            {
                i++;
                continue;
            }
            else
                nums[j]=nums[i];
            
            i++;
            j++;
        }
        //cout<<j<<endl;
        return j;
    }
    
};