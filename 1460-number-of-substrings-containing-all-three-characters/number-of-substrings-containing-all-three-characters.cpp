class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int c=0;
        int n=s.length();
        string str="abc";
        int r=0,l=0;

        while(l<n){
            mp[s[l]]++;
            while(mp.size()==3 && r<=l){
                c+=n-l;
                mp[s[r]]--;
                if(mp[s[r]]==0){
                    mp.erase(s[r]);
                }
                r++;
            }
            l++;
        }
        return c;
    }
};