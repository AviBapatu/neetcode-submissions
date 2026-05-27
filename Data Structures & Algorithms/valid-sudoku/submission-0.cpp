class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> seen(10);

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j] == '.') continue;

                int val = board[i][j] - '0';
                if(!seen[val]) seen[val] = 1;
                else return false;
            }
            fill(seen.begin(), seen.end(), false);
        }

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[j][i] == '.') continue;

                int val = board[j][i] - '0';
                if(!seen[val]) seen[val] = 1;
                else return false;
            }
            fill(seen.begin(), seen.end(), false);
        }


        for(int i=0;i<9;i+=3) {
            for(int j=0;j<9;j+=3) {
                unordered_set<char> seenMap;

                for(int rowStart = i;rowStart < i+3;rowStart++) {
                    for(int colStart = j; colStart < j+3;colStart++) {

                        if(board[rowStart][colStart] == '.') continue;
                        
                        char val = board[rowStart][colStart];
                        if(seenMap.count(val)) return false;

                        seenMap.insert(val);
                    }

                }
            }
        }

        return true;
    }
};
