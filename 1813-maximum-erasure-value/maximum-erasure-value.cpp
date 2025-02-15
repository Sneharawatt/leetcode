class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int r = 0, l = 0, sum = 0, maxi = 0;
        unordered_map<int, int> mp;
        while (r < nums.size()) {
            mp[nums[r]]++;
            while (mp[nums[r]] > 1) {
                mp[nums[l]]--;
                sum -= nums[l];
                l++;
            }
            sum += nums[r];
            maxi = max(maxi, sum);
            r++;
        }
        return maxi;
    }
};