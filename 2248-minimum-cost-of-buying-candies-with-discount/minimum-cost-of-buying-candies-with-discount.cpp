class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int p=0;
        sort(cost.rbegin(),cost.rend());
        for(int i=0;i<cost.size();i++){
            if(i%3!=2){
                p+=cost[i];
            }
        }
        return p;
    }
};