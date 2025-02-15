class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return 0;
        vector<int>arr(n,0);
        for(int i=2 ; i<n ; i++){
            if(nums[i-1]-nums[i-2]==nums[i]-nums[i-1]){
                arr[i] =1+arr[i-1];
            }
        }
        int ans=accumulate(arr.begin(),arr.end(),0);
        return ans;
    }
};