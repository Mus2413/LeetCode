class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,n=nums.size(),l=0,r=n-1;
        while(i<=r)
        {
            if(nums[i]==0 && i!=l)
            {
                swap(nums[i],nums[l]);
                l++;
                
            }
            else if(nums[i]==2 && i!=r)
            {
                swap(nums[i],nums[r]);
                r--;
            }
            else
            {
                i++;
            }
        }
        return ;
    }
};