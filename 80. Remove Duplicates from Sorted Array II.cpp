class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , ans = 0 ,count = 0;
        int a = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==a && count<2){
                nums[ans+count]=a;
                count++;
            }
            else{
                
                if(nums[i]!=a){
                    a=nums[i];
                    ans+=count;
                    nums[ans]=a;
                    count=1;
                    
                }
            }
        }
        ans+=count;
        cout<<ans<<endl;
		
        return ans ;
    }
};