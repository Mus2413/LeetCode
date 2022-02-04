class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec( n , vector<int> (n, 0));
        int last_col = n;
        int last_row = n;
        int first_row = 0;
        int first_col = 0;
        int i;
        int x = 1;
        while(first_row < last_row && first_col < last_col){
            for(i = first_col ; i < last_col ; i++ ){
                vec[first_row][i] = x;
                x++;
            }
            first_row++;
            for( i = first_row ; i < last_row ; i++){
                vec[i][last_col -1] = x;
                x++;
            }
            last_col--;
            if(first_row < last_row){
                for ( i = last_col - 1 ; i >= first_col ; i--){
                    vec[last_row - 1][i] = x;
                    x++;
                }
                last_row--;
            }
            if(first_col < last_col){
                for ( i = last_row - 1 ; i >= first_row ; i--){
                    vec[i][first_col] = x;
                    x++;
                }
                first_col++;
            }
        }
        return vec;
    }
};