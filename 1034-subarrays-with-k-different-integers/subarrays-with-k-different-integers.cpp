class Solution {
public:
    int atmost(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int r=0,l=0 ,c=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            c += r-l;
            r++;    
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};