class Solution {
public:
    bool isPalindrome(int x) {
        long int rm=0,rev=0,o=x;
        while(x!=0){

            rm=x%10;
            rev=rev*10+rm;
            x=x/10;
        }
        if(o==rev&&o>=0){
            return true;
        }
        return false;
    }
};