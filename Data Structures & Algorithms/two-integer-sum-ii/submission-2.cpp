class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2,0);
        int l = 0, r = nums.size()-1;
        while(l<r){
            if(nums[l]+ nums[r]==target){
                v[0] = ++l;
                v[1] = ++r;
                break;
            }
            else if(nums[l]+ nums[r]>target) r--;
            else l++;
        }
        return v;
    }
};
