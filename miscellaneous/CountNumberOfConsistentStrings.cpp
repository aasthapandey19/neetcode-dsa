class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>mp(26);
        int count=0;
        for(auto x:allowed)mp[x-'a']++;
        for(auto x: words){
            bool flag=true;
            for(auto y:x)if(!mp[y-'a'])flag=false;
            if(flag)count++;
        }
        return count;
    }
};