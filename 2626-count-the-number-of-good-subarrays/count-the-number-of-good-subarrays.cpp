class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int l=0 ,c=0; 
        long long ans=0 ;
        for(int r=0 ; r<nums.size() ; r++){
            c+=mp[nums[r]];
            mp[nums[r]]++;

            while(c>=k){
                ans += n-r;
                mp[nums[l]]--;
                c-=mp[nums[l]];
                l++;
            }
        }
        return ans;
    }
};

