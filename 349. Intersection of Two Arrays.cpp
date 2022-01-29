class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(auto it : nums1)
            ++m[it];
        for(auto it : nums2){
            if(m.find(it) != m.end() && m[it] != -1){
                ans.push_back(it);
                m[it] = -1;
            }
        }
        return ans;
    }
};