class Solution {
public:
    int reverseBits(int n) {
        vector<int> no;
      
        
       
            

int ans=0;
for(int i=0;i<32;i++){
    ans+=n%2*pow(2,31-i);
    n=n/2;
}
return ans;
    }
};