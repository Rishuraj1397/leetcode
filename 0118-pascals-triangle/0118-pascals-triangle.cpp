class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;//this is for storing result in triangle form

        result.push_back({1});//yeah harek me first element push krega like n kuch v ho n = 0 me to sirf 1 hee hoga

        for(int row = 1; row < numRows; row++){
            vector<int> newRow;//yeah eak new row banayega hareak itteration ke liye
            newRow.push_back(1);//for every row the forst element should be 1

            vector<int> prevRow = result[row - 1];//this is the logic jisme previous row ko store krenge kyuki ussi ko add krke to next row banana hai

            for(int i = 1; i < row; i++){
                newRow.push_back(prevRow[i] + prevRow[i - 1]);
            }

            newRow.push_back(1);//this is for ending because harek row end v 1 se hee hoga
            result.push_back(newRow);
        }

        return result;
    }
};