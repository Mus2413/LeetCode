class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int index;
        double ans;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==0){
            index=n/2;
            ans=(nums1[index-1]+nums1[index])/2.0;
        }
        else{
            index=(n+1)/2;
            ans=nums1[index-1];
        }
        return ans;
    }
};