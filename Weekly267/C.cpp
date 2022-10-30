// https://leetcode.com/problems/decode-the-slanted-ciphertext/
//code ::

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(rows == 1)
            return encodedText;
        int l = encodedText.length();
        int col = l/rows;
        vector<vector<char>> mat(rows, vector<char> (col));
        int val = 0;
        for(int i = 0 ; i < rows; i++)
        {
            for(int j = 0 ; j < col ;j++)
            {
                mat[i][j] = encodedText[val];
                val++;
            }
        }
        string ans = "";
        for(int i = 0; i < col; i++)
        {
            int row = 0;
            int c = i;
            while(c < col and row < rows)
                ans += mat[row++][c++];
        }
        while(ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};

