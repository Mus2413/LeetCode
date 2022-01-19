class Solution {
public:
    int mySqrt(int x) {
      if(x<=1)
            return x;
      long long  int l=1,h=x,mid;
        while(h-l>1){
            mid=l + ((h-l)/2);
            if(mid*mid<x)
                l=mid;
            else if(mid*mid>x)
                h=mid-1;
            else
                return mid;
        }
        if(h*h<=x)
            return h;
        return l;
    } 
    
};