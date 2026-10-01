class Solution {
public:
    int findMin(vector<int> &nums) {
        int k = -1;
        int n = nums.size();
        for(int i = 0; i< n-1; i++){
            if(nums[i]>nums[i+1])  k = i;
        }
        if(k==-1) return nums[0];
        return nums[k+1];
    }
};
