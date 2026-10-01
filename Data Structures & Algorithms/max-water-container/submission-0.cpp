class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n-1;
        int maxVol = abs(r-l)  *  min(heights[l], heights[r]);
        while(l<=r){
            int volHeight = min(heights[l], heights[r]);
            int vol  = abs(r-l)  *  min(heights[l], heights[r]);
            maxVol = max(vol, maxVol);
            if(heights[l]>heights[r]) r--;
            else l++;
        }
        return maxVol;
    }
};
