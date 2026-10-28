class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // sort so we can do binary search
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        
        int n = nums.size();

        for(int i = 0; i< n-2; i++){

            // we have to find elements so sum is zero
            // find this for every element we get in a linear search
            int target = -nums[i];

            int left = i+1, right = n-1;
            // we dont do left<= right to avoid counting an element again
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

        // remove duplicate vectors from a vector of vectors
        
        std::sort(v.begin(), v.end());
        v.erase(std::unique(v.begin(), v.end()), v.end());

        return v;
    }
};