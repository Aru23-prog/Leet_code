class Solution {
public:
    int reverseBits(int n) {
        vector<int> no;
        int r;
        for(int i=0;i<32;i++){
        no.push_back(n%2);
            n=n/2;
        }
       
            

int ans=0;
for(int i=0;i<32;i++){
    ans+=no[i]*pow(2,31-i);
}
return ans;
    }
};