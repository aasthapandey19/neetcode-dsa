class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }
    }
};
/*
brute - make new array , copy allelements from back to front of this arr  O(n)sp O(n)time
better-
do reverse of vector  
best- do reverse but via 2 pointer ..all ements accessed once but operation =O(n/2) ,sp=O(1)  swap(a[i++],a[j--]) 



*/