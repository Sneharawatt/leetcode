class Solution {
public:
bool ispal(string s,int l,int r){
    while(r>l){
        if(s[r]!=s[l]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
    int countSubstrings(string s) {
        int n=s.size();
        int ans=n;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(ispal(s,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};
