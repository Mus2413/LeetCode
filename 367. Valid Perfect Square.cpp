class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned low=0;
    unsigned high=num;
    unsigned long long m;
	//binary search algo
    while(low<=high)
    {
        m = (low+high)/2;
        if(m*m==num)
            return true;
        else
            if(m*m>num)
                high = m-1;
        else
            low=m+1;
    }
    return false;
    }
};