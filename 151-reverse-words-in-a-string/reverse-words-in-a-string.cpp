class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        string b="";
        for(int i=s.size()-1;i>=0;i--){
            
            if(s[i]==' '){
                if(c>0){
                b+=s.substr(i+1,c);
                b+=" ";
                c=0;
                }
                
            }
            else{
                    c++;
            }}
            if(c>0){
                b+=s.substr(0,c);
            }
        if(!b.empty()&&b.back()==' '){
            b.pop_back();
        }
    return b;
    }

};