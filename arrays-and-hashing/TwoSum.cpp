class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            int x=nums[i];
            if(mp.find(target-x)!=mp.end()) return {i, mp[target-x]};
            mp[x]=i;
        }
        return {};
    }
};
/*
- cant be done in o(n2) , always 2 elwms ? Y repetition not allowed taken care of , fits integer ? Y
- one way os O(n^2)  each elem .. trace all i+1 to end;
- another way - sort them with a map for original index space(o n) then for each elem check target-x with logn complexity so n*lklogn tc +nlogn for sorting , space for sorting and for mpapping
-put all elemnts in map with index ; for every element in map check if target-x exists, if yes  will return since exactly one soln [resent ]
O(n) fro spave , O(n+K) for making map insertions then doing o(1) lookup for all elemnts which in worst case could be K, ie no of distinct indexex

- better - start putting in map, if target-x alreasy exists in map , return both index, time complexity is O(n) space ->O(n)



*/