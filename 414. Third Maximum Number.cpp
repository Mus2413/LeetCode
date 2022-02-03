class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = nums[0],second = nums[0],third = nums[0];
        for(auto x : nums){
            if(first < x){
                third = second;
                second = first;
                first = x;
            }
            if((second < x and x < first)||(second == first)){
                third = second;
                second = x;
            }
            if((third < x and x < second)||(third == second)||(third == first)){
                third = x;
            }
        }
        //Check condition if third maximum exists or not
        return second==third ? first:third;
    }
};