class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int lastStone=0;
        priority_queue<int>pq(stones.begin(),stones.end());
        while(pq.size()>=2){
            int top=pq.top();pq.pop();
            int bottom=pq.top();pq.pop();
            if(top-bottom>0)pq.push(top-bottom);
        }
        return pq.empty()?0:pq.top();

    }
};