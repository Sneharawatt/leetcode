class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int c = 0, sum = 0;
        mp[0]=1;
        for(int l=0 ; l < n ; l++) {
            sum += (nums[l] % 2);
            if(mp.find(sum-k)!=mp.end()){
                c +=mp[sum-k];
            }
            mp[sum]++;
        }
        return c;
    }
};
