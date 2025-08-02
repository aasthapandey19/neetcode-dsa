class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        unordered_map<int,int>mp;
        for(auto x:chars)mp[x]++;
        vector<int>check(26);
        for(auto x:words){
            fill(check.begin(), check.end(), 0);
            for(auto y:x)check[y-'a']++;
            bool flag=true;
            for(auto j=0;j<26;++j){
                if(check[j]!=0 && mp[j+'a']<check[j])flag=false;
            }
            if(flag)count+=x.size();
        }
        return count;
    }
};