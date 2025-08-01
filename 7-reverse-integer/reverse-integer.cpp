class Solution {
public:
    int reverse(int x) {
         long int rev=0;
      while(x!=0){
        int rm=x%10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rm > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rm < -8)) return 0;
        rev=rev*10+rm;
        x=x/10;
      }  
      return rev;
    }
};