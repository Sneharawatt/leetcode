class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        int n=s.size();
        int r,l;
        for(int i=0 ; i<n ; i++){
            r=i;
            l=i;
            while(r<n && l>=0 && s[r]==s[l]){
                if(ans.size()<r-l+1){
                    ans=s.substr(l,r-l+1);
                }
                r++;
                l--;
            }
            r=i+1;
            l=i;
            while(r<n && l>=0 && s[r]==s[l]){
                if(ans.size()<r-l+1){
                    ans=s.substr(l,r-l+1);
                }
                r++;
                l--;
            }
        }
        return ans;
    }
};