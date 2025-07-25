class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long answer=0;
        priority_queue<int>pq(gifts.begin(),gifts.end());
        while(k-- && !pq.empty()){
            int val=pq.top();
            pq.pop();
            pq.push(sqrt(val));
        }
        while(!pq.empty()){
            answer+=pq.top();
            pq.pop();
        }
        return answer;
    }
};
//Time complexity: O(k log n) where n is the number of gifts