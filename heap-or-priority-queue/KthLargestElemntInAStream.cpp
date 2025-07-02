class KthLargest {
public:

    priority_queue<int,vector<int>,greater<int>>pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto x:nums){
          int v=  add(x);
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k) pq.pop();
        return pq.top();
        }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// Time Complexity: O(log k) for each add operation
// Space Complexity: O(k) for storing the k largest elements in the priority queue  
// Note: The priority queue is implemented as a min-heap, so the smallest element is at the top.