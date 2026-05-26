class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector <int> large(27,0);
        vector <int> small(27,0);
        for(char c:word){
            if(c>='a'&&c<='z'){
            if(small[c-'a']==0)small[c-'a']=1;
            else{
                small[c-'a']+=1;
            }}
            else{
                if(large[c-'A']==0)
                large[c-'A']=1;
            else{
                large[c-'A']+=1;
            }
            }

        }
        int c=0;
        for(int i=0;i<27;i++){
            if(large[i]!=0&&small[i]!=0){
                c++;
            }
        }
        return c;
    }
};