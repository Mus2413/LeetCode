class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // using one hashmap 
        int s1=nums1.size();
        int s2=nums2.size();
        return s1>s2?search_map(nums1,nums2):search_map(nums2,nums1);
    }
    vector<int>search_map (vector<int>& n1, vector<int>& n2)
    {
        vector<int> v;
        map<int,int> hash;
        for(auto i:n1)hash[i]++; // needed to detect the freueucy 
      
	  for(int i=0;i<n2.size();i++)
                if(hash[n2[i]]-->0) v.push_back(n2[i]);  
				
        return v;
    }
};