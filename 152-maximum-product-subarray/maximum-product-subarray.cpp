class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN,prod=1;
        int n=nums.size();

        for(int i=0 ; i<n ; i++){
            if(prod==0){
                prod=1;
            }
            prod=prod*nums[i];
            maxi=max(prod,maxi);
        }
        prod=1;
        for(int i=n-1 ; i>=0 ; i--){
            if(prod==0){
                prod=1;
            }
            prod=prod*nums[i];
            maxi=max(prod,maxi);
        }
        return maxi;
    }
};