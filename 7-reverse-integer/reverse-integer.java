class Solution {
    public int reverse(int x) {
        int rd,n=0;
        while(x!=0){
            rd=x%10;
            if (n > Integer.MAX_VALUE / 10 || (n == Integer.MAX_VALUE / 10 && rd > 7)) return 0;
            if (n < Integer.MIN_VALUE / 10 || (n == Integer.MIN_VALUE / 10 && rd < -8)) return 0;

            n=n*10+rd;
            x=x/10;
        }return n;
    }
}