class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMax=prices[prices.size()-1];
        int tracer= 0;
        for(int i=prices.size()-2;i>=0;--i){
            currMax=max(currMax,prices[i]);
            tracer=max(tracer,currMax-prices[i]);
        }
        return tracer;
    }
};
// complexity: O(n)
// space: O(1)  
