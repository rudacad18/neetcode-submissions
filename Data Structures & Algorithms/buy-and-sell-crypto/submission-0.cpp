class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0) return 0;

        int maxDiff = 0;

        for(int i = 0; i<n ; i++){
            for(int j = i; j<n; j++){
                maxDiff = max(maxDiff, prices[j]- prices[i]);
            }
        }
        return maxDiff;
    }
};
