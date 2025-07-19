class Solution {
    void isPrime(vector<int>&check){
        check[0]=false;
        check[1]=false;
        for(int i=2;i*i<=check.size();++i){
            if((check[i])==true){
            for(int j=i*i;j<check.size();j=j+i){
                check[j]=false;
            }}
        }
    }
public:
    long long splitArray(vector<int>& nums) {
        long long A=0;
        long long  B=0;
        vector<int>check(nums.size()+1,true);
        isPrime(check);
        for(int i=0;i<nums.size();++i   ){
            if(check[i]==true)B=B+nums[i];
            else A+=nums[i];
        }
        return abs(A-B);
    }
};
