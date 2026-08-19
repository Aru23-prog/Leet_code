class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> p;
    for(int i:nums){
        p.push(i);
    }
    int a;
    for(int i=0;i<k;i++){
        a=p.top();
        p.pop();
    }
    return a;
    }
};