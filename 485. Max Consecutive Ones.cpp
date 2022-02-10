class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int sum=0;
        nums.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]==0)
            {
                count=max(count,sum);
                sum=0;
                
            }
        }
        return count;
    }
};