class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> arr={0,1}; //base requirement
        while(n>1)
        {
            
            int bit=log2(arr.size());
            for(int i=arr.size()-1;i>=0;i--)
            {
                arr.push_back(arr[i]|(1<<bit));
            }
            n--;
        }
        
        return arr;
    }
};