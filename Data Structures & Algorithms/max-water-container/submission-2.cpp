class Solution {
public:
    int maxArea(vector<int>& heights) {
    
        int n = heights.size();

        int l= 0, r= n-1;
        int maxi = INT_MIN;
        while(l<=r){
            int vol = abs(r-l) * min(heights[r], heights[l]);

            if(heights[r]> heights[l]){
                l++;

            }
            else r--;
            maxi = max(maxi, vol);


        }
        return maxi;
    }
};
