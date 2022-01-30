class Solution {
public:
     vector <string> readBinaryWatch(int turnedOn) {
        vector <string> ans;
        vector<int> num = {8, 4, 2, 1, 32, 16, 8, 4, 2, 1};
        process(num, ans, 0, 0, 0, turnedOn);
        return ans;
    }

    void process(vector<int> &num, vector <string> &ans, int h, int m, int index, int rest) {
        if (rest == 0) {
            string tmp;
            tmp += to_string(h);
            tmp += ":";
            if (m < 10) {
                tmp += "0";
            }
            tmp += to_string(m);
            ans.push_back(tmp);
            return;
        }

        if (index >= 10) {
            return;
        }

        process(num, ans, h, m, index + 1, rest);
        int val = num[index];
        if (index < 4 && h + val < 12) {
            process(num, ans, h + val, m, index + 1, rest - 1);
        } else if (index > 3 && m + val < 60) {
            process(num, ans, h, m + val, index + 1, rest - 1);
        }

    }
};