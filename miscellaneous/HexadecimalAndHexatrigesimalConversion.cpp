class Solution {
public:
    vector<char> checky;
    void put(vector<char>&checky){
        checky.push_back(' ');
    for(char c='A';c<='Z';c++)checky.push_back(c);
    return ;
    }
    string hexa(int x){
        string res="";
        while(x){
            int rem =x%16;
            if(rem<=9) res+=to_string(rem);
            else res+=checky[rem-9];
            x=x/16;
        }
        reverse(res.begin(),res.end());
        return res==""?"0":res;
    }
    string trig(int x){
        string res="";
        while(x){
            int rem =x%36;
            if(rem<=9) res+=to_string(rem);
            else res+=checky[rem-9];
            x=x/36;
        }
        reverse(res.begin(),res.end());
        return res==""?"0":res;
    }
public:
    string concatHex36(int n) {
     int sq=n*n;
     int cu=sq*n;
     put(checky);
     string hex=hexa(sq);
     string tri=trig(cu);
     return hex+tri;   
    }
};
// time complexity: O(log n)
// space complexity: O(1)   
