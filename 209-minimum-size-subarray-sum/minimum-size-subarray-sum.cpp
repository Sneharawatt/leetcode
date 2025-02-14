class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r=0,l=0 ,sum=0;
        int mini=INT_MAX;
        while(l<nums.size()){
            sum += nums[l];

            while(sum>=target){
                mini=min(mini,l-r+1);
                sum -= nums[r++];
            }
            l++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};