class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, res = 0;

        for(int j = 1; j< prices.size(); j++){
            if(prices[j]< prices[i]){
                i = j;
            }
            else{
                res = max(res, prices[j] - prices[i]);
            }
        }
        return res;
    }
};