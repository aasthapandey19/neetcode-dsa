class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(auto x:points){
            pair<int,vector<int>>p={ x[0]*x[0]+x[1]*x[1],x};
            pq.push(p);
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
//time complexity: O(nlogk) where n is the number of points