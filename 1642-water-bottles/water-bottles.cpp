class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        while(numBottles>=numExchange){
            int rm=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            count=count+numBottles;
            numBottles=numBottles+rm;
        } 
        return count;  }
};