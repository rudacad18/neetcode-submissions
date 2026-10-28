class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        
        int n = nums.size();

        for(int i = 0; i< n-2; i++){
            int target = -nums[i];

            int left = i+1, right = n-1;

            while(left<right){
                int sum = nums[left] + nums[right];
                if(sum== target){
                    v.push_back({nums[i], nums[left], nums[right]});
                    left++; right--;
                }
                else if(sum< target) left++;
                else right--;

            }

        }
        std::sort(v.begin(), v.end());
        v.erase(std::unique(v.begin(), v.end()), v.end());

        return v;
    }
};