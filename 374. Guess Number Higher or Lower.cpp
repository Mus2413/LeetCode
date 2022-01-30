/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
int low=0;
int high=n-1;
while(low<=high)
{
long long int mid=low+(high-mid)/2;
if(guess(mid)==-1)
high=mid-1;
else if(guess(mid)==1)
low=mid+1;
else
return mid;
}
return low;
}
    
};