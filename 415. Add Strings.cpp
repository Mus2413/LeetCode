class Solution {
public:
    string addStrings(string num1, string num2) {
        int carryover = 0; 
        int n1_len = num1.length()-1;
        int n2_len = num2.length()-1;
        int prev = 0; 
        int temp = 0;
        string ans;
        
        while(n1_len >=0 || n2_len >=0){
            int num1_val = n1_len<0 ? 0 : num1[n1_len]-'0';
            int num2_val = n2_len<0 ? 0 : num2[n2_len]-'0';
            
            temp = prev * 10 + num1_val + num2_val +carryover;
            carryover = (num1_val + num2_val+carryover)/10;
            temp %=10;
            ans+=to_string(temp);
            
            n1_len-=1;
            n2_len-=1; 
        }
        if(carryover){
            ans+=to_string(carryover);
            carryover--;
        }
        
        reverse(ans.begin(), ans.end());
    
        
        return ans;
    }
};