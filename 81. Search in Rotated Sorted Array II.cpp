class Solution {
public:
    bool search(vector<int>& nums, int target) {
         
        int l, r;
        int n = nums.size();
        if(n == 1) {
            return nums[0] == target;
        }
        // First we find pivot
        int pivot = n - 1;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        // If pivot equals size, then it is a normal binary
        if(pivot == n - 1) {
            l = 0;
            r = n - 1;
        }
        else {
            // Otherwise check if it's on right side or left side
            if(target >= nums[pivot + 1] && target <= nums[n - 1]) {
                l = pivot + 1;
                r = n - 1;
            }
            else if(target >= nums[0] && target <= nums[pivot]) {
                l = 0;
                r = pivot;
            }
            else {
                return false;
            }
        }
        int mid;
        // Binary search
        while(l <= r) {
            mid = l + (r - l) / 2;
            if(nums[mid] == target) {
                return true;
            }
            if(nums[mid] > target) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
       
        return false;
    }
};
   