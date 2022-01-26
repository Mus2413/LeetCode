class Solution {
public:
    bool canWinNim(int n) {
        if (n % 4) return true; // % multiply able bt 4 (in this case).
        else return false;
    }
};