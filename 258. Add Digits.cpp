class Solution {
public:
    int solve(int num)
    {
        int x=0;
        while(num!=0)
        {
            x+=num%10;
            num=num/10;
        }
        return x;
    }
    int addDigits(int num) {
        int x=solve(num);
        while(x>9)
        {
            x=solve(x);
        }
        return x;
    }
};