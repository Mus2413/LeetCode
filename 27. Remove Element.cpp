class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0,n=nums.size();
        while(i<n)
        {
            if(nums[i]==val)
            {
                i++;
                continue;
            }
            else
                nums[j]=nums[i];
            
            i++;
            j++;
        }
        return j;
    }
};