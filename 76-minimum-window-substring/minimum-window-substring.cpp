class Solution {
public:
    string minWindow(string s, string t) {
        if(s==t) return t;
        if(s.length()<t.length()) return "";
        unordered_map<char,int>mp;
        for(auto itr: t){
            mp[itr]++;
        }
        string ans="";
        int r=0,l=0,c=0,start,mini=INT_MAX;
        while(r<s.length()){
            if(mp.find(s[r])!= mp.end()){
                if(mp[s[r]]>0){
                    c++;
                }
                mp[s[r]]--;
            }
            while(c==t.length()){
                if(r-l+1<mini){
                    mini=r-l+1;
                    start=l;
                }
                if(mp.find(s[l])!=mp.end()){
                    mp[s[l]]++;
                    if(mp[s[l]]>0){
                        c--;
                    } 
                }
                l++;
            }
            r++;
        }
        if(mini == INT_MAX){
            return "";
        }
        ans=s.substr(start,mini);
        return ans;
    }
};