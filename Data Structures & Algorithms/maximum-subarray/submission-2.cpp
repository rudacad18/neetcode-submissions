class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int ending = nums[0];

        for(int i = 1; i< nums.size(); i++){
            ending = max(ending + nums[i], nums[i]);
            res = max(res, ending);
        }

        return res;
    }
    
};
