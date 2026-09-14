class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9);
        vector<set<char>> col(9);
        vector<set<char>> box(9);

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char val = board[r][c];
                if(val == '.'){
                    continue;
                }
                int boxIndex = 3*(r/3) + c/3;
                if(row[r].count(val) || col[c].count(val) || box[boxIndex].count(val)){
                    return false;
                }
                row[r].insert(val);
                col[c].insert(val);
                box[boxIndex].insert(val);
            }
        }
        return true;
    }
};
