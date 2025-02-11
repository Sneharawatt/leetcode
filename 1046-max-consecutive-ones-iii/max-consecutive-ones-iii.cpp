class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,l=0,x=0;
        int maxi=0;
        while(l<nums.size()){
            if(nums[l]==0){
                x++;
            }
            while(x>k){
                if(nums[r]==0){
                    x--;
                }
                r++;
            }
            maxi=max(maxi,l-r+1);
            l++;
        }
        return maxi;
    }
};