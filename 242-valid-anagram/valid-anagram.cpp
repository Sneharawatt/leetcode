class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(int i=0 ; i<t.size() ; i++){
            if(mp.find(t[i])==mp.end()){
                return false;
            }else{
                mp[t[i]]--;
                if(mp[t[i]]==0){
                    mp.erase(t[i]);
                }
            }
        }
        return true;
    }
};