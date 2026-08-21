class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    for(int n: nums){
        mp[n]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto &m: mp){
        pq.push({m.second,m.first});
    }
    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
    }
};