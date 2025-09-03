class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int j=0,ans=0,maxi=0;
        for(int i=0 ; i<s.size() ; i++){
            mp[s[i]]++;
            maxi=max(maxi,mp[s[i]]);

            if((i-j+1)-maxi>k){
                mp[s[j]]--;
                j++;
            }

            ans=max(ans,i-j+1);
        }
        return ans;
    }
};