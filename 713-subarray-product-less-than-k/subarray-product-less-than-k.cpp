class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int r=0,l=0 ,c=0;
        int prod=1;
        while(l<nums.size()){
            prod *= nums[l];
            while(prod>=k && r<=l){
                prod =prod/nums[r++];
            }
            c += l-r+1;
            l++;
        }
        return c;
    }
};