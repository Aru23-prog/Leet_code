class Solution {
public:
    string largestOddNumber(string num) {
        int flag=0;
        int x;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                x=i;
                flag=1;
                break;
            }
        }

        int i=0;
        while(i<=x&& num[i]=='0')
        i++;

    if(flag==1)
    return num.substr(i,x-i+1);
    else
    return  "";
    }
};