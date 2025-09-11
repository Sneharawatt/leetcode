class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums){
            pq.push(i);
        }
        int n;
        while(!pq.empty() && k>0){
            n=pq.top();
            pq.pop();
            k--;
        }
        return n;
    }
};