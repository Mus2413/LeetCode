class NumArray {
public:
    vector<int>pre;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        pre.push_back(nums[0]);
        int x=nums[0];
        for(int i=1;i<n;i++)
        {
             x=x+nums[i];
            pre.push_back(x);
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left-1>=0)
        {
            return pre[right]-pre[left-1];
        }
        else
            return pre[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */