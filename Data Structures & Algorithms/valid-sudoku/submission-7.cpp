class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> squares(9);

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                char curr = board[i][j];

                if(curr == '.') continue;

                int square = (i/3)*3+(j/3);

                if(rows[i].contains(curr) || cols[j].contains(curr) || squares[square].contains(curr)) {
                    return false;
                }

                rows[i].insert(curr);
                cols[j].insert(curr);
                squares[square].insert(curr);
            }
        }

        return true;
    }
};
