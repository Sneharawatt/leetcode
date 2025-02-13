class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0, sum = 0 ,r=0 ,res=0;
        for(int l=0 ; l < n ; l++) {
            if (nums[l] % 2 == 1){
                sum++;
                c=0;
            }
            while(sum==k){
                c++;
                if (nums[r] % 2 == 1){
                    sum--;
                }
                r++;
            }
            res += c;
        }
        return res;
    }
};
