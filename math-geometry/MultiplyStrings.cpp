class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0") return "0";
        vector<int>res(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;--i){
            for(int j=num2.size()-1;j>=0;j--){
                res[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                res[i+j]+=res[i+j+1]/10;
                res[i+j+1]%=10;
            }
        }
        int i=0;
        string ans="";
        while(res[i]==0)i++;
        while(i<res.size()) ans+=(res[i++]+'0');
        return ans;
    }
};
// by both strings, and characters are appended to the result string in an alternating fashion.
// The time complexity is O(n + m) where n is the length of word1 and       m is the length of word2, and the space complexity is O(n + m)