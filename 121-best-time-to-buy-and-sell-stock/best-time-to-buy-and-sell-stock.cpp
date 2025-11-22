class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            buy=min(buy,prices[i]);
            prof=max(prof,prices[i]-buy);
        }
        return prof;
    }
};