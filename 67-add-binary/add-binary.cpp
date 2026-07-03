class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int sum=0;
        int carry=0;
        int A=a.size()-1;
        int B=b.size()-1;
        while(A>=0||B>=0||carry){
            sum=carry;
            if(A>=0)
            sum=a[A]-'0'+sum;
            if(B>=0)
            sum+=b[B]-'0';

            ans+=(sum%2)+'0';
            carry=sum/2;
            A--;
            B--;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};