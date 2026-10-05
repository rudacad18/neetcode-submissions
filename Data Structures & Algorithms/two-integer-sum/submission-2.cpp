class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     //   std::sort(nums.begin(), nums.end());
        // int maxi = std::*max_element(nums.begin(), nums.end());
        // int mini = std::*min_element(nums.begin(), nums.end());
        // if(mini>0) mini=0;
        // std::vector<int> freq(maxi-mini+1, 0);
        // int os = 0;

        // int ss = os-mini;

        // for(int i =0; i<nums.size(); i++){
        //     freq[nums[i]-ss]++;
        // }

        // for(int i = 0; i<freq.size()-target; i++){
        //     if(freq[i]&&freq[i+target]){
        //         return
        //     }

        // }
        int n = nums.size();
        
        for(int i=0; i< n; i++){
            for(int j =i+1; j<n; j++){
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {};


    }
};
