class Solution {
   public:
    int uniquePaths(int m, int n) {
        std::vector<int> row(n, 1);
        for (int i = 0; i < m - 1; i++) {
            std::vector<int> newRow(n, 1);
            for (int j = n - 2; j >= 0; j--) {
                newRow[j] = newRow[j + 1] + row[j];
            }
            for (int k = 0; k < n; k++) {
                row[k] = newRow[k];
            }
        }
        return row[0];
    }
};
