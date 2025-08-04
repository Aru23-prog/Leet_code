class Solution {
public:
    int fib(int n) {
        int t1=0,t2=1,t,ans;
        if(n==0){
            ans=0;
        }
        else if(n==1){
            ans=1;
        }
        else{
            for(int i=2;i<=n;i++){
                t=t1+t2;
                t1=t2;
                t2=t;
                ans=t;
        }
        }
        return ans;
        
    }
};