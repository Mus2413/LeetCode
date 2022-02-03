class Solution {
public:
    
    string toHex(int num) {
         if(num==0)return "0";
        string s;
        unsigned int n = (unsigned int)num;
        while(n){
            int r = n%16;
            if(r<10){
                s+=r+48;
            }
            else{
                s+=r+87;
            }
            n=n/16;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};