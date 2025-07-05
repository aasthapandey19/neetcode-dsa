class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        int res=INT_MIN;
        for(auto x:arr)mp[x]++;
        for(auto x:mp){
            if(x.first==x.second)res=max(res,x.first);
        }
        return (res==INT_MIN?-1:res);
    }
};