class Solution {
   public:
    int longestCommonSubsequence(string& text1, string& text2) {
        int n1 = text1.length();
        int n2 = text2.length();

        vector<vector<int>> v(n1 + 1, vector<int>(n2 + 1, 0));

        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                if (text2[j] == text1[i]) {
                    v[i][j] = v[i + 1][j + 1] + 1;
                } else {
                    v[i][j] = max(v[i + 1][j], v[i][j + 1]);
                }
            }
        }
        return v[0][0];
    }
};
