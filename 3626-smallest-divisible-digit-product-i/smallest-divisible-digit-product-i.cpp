class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){

        
        int o=n;
        int k=1;
        while(o!=0){
            k*=o%10;
            o=o/10;
        }
        if(k%t==0)
        return n;
        n++;
        }
    }
};