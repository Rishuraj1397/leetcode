class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        result.push_back({1});

        for(int row = 1; row < numRows; row++){
            vector<int> newRow;
            newRow.push_back(1);

            vector<int> prevRow = result[row - 1];

            for(int i = 1; i < row; i++){
                newRow.push_back(prevRow[i] + prevRow[i - 1]);
            }

            newRow.push_back(1);
            result.push_back(newRow);
        }

        return result;
    }
};