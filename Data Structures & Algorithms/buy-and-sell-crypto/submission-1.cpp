class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0) return 0;

        int l = 0, r = 1;
        int maxP = 0;

        while(r<n){
            if(prices[l]<prices[r]){
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            }
            else l = r;
            r++;
        }
        return maxP;
    }
};
