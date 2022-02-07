class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n)
        {
            if(nums[nums[i]-1] !=nums[i])
            {
                swap(nums[nums[i]-1],nums[i]);
            }
            else
                i++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
            if(nums[i]!=i+1)
                ans.push_back(i+1);
        }
        return ans;
    }
};