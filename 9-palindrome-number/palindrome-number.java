class Solution {
    public boolean isPalindrome(int x) {
        int o=x;
        int rev=0;
        int rm;
        while(x!=0){
         rm=x%10;
         rev=rev*10+rm;
         x=x/10;
        }
        if(rev==o&&o>=0){
            return true;

        }
        else{
            return false;
        }
    }}
