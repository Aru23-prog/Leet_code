class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, pro=1,r,o=n;
    while(n!=0){
        r=n%10;
        sum+=r;
        pro*=r;
        n=n/10;
    }
    if(o%(sum+pro)==0){
        return true;
    }
    return false;
    }
};