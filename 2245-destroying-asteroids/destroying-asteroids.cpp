class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long int g=mass;
        for(int i=0;i<asteroids.size();i++){
            if(g>=asteroids[i]){
                g+=asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};