class Solution {
public:
    int mySqrt(int x) {

        int low=0,high=x,mid;
        while(low<=high){
            mid=(high+low)/2;
            long long square = 1LL * mid * mid;
            if(square>x){
                high=mid-1;
            }
            else if(square<x){
                low=mid+1;
            }
            else{
                return mid;
            }
        }
        return high;
    }
};