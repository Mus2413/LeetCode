
    bool comp(vector<int>&a,vector<int>&b)
{
    return a[1]<b[1];
}
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>>ans;
        for(auto it:intervals)
        {
            if(it[1]<newIntervals[0]){
                ans.push_back(it);
            }
            else if(it[0]>newIntervals[1]){
                ans.push_back(newIntervals);
                newIntervals=it;
            }
            else{
                newIntervals[0]=min(it[0],newIntervals[0]);
                newIntervals[1]=max(it[1],newIntervals[1]);
            }
        }
        ans.push_back(newIntervals);
    
        return ans;
    }
};
