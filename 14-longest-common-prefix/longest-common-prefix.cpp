class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        string first=strs[0],last=strs[n-1];
        int i=0;
        while(i<min(first.size(),last.size())){
            if(first[i]==last[i]){
                ans+=first[i];
            }
            else{
                break;
            }
            i++;
        }
        return ans;
    }
};