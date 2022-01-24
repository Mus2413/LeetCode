class Solution {
public:
     bool isHappy(int n) {
        if(n == 1 || n == 7)
            return true;
        if(n < 9)
            return false;
        
        int num = 0;
        while(n > 0){
            num += pow(n%10,2);
            n /= 10;
        }
        return isHappy(num);
    }
};