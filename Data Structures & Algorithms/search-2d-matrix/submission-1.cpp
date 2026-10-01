class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totalSize = matrix.size() * matrix[0].size();
        vector<int> v;
        for(int i = 0; i< matrix.size(); i++){
            for(int j = 0; j< matrix[0].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }

        int l = 0, r = totalSize-1;
        while(l<=r){
            int mid = l+ (r-l)/2;
            if(v[mid]==target) return true;
            else if(v[mid]<target) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};
