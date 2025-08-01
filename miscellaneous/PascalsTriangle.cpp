class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        if(numRows==0) return result;
        result.push_back({1});
        if(numRows==1) return result;
        result.push_back({1,1});
        if(numRows==2) return result;
        numRows-=2;
        for(int i=1;i<=numRows;++i){
            vector<int>temp;
            temp.push_back(1);
            vector<int>checker=result[i];
            for(int j=1;j<checker.size();++j){
                temp.push_back(checker[j]+checker[j-1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};