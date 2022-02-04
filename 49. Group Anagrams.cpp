class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, pair<int, int>> mp;
        int counter = 0;
          for (int i = 0; i < strs.size(); i++) {
             string temprory = strs[i];
             sort(temprory.begin(), temprory.end());
            if (mp[temprory].first < 1)
            {
            mp[temprory].first += 1;
            mp[temprory].second = counter;
            vector<string> t;
            answer.push_back(t);
            answer[counter].push_back(strs[i]);    
            counter++;
        }

        else {
            int index = mp[temprory].second;
            answer[index].push_back(strs[i]);
        }
        
    }
    return answer;
    
    }
};