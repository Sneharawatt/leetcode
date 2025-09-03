class Solution {
public:
    bool isPalindrome(string s) {
        int r=0,l=s.size()-1;
        while(r<l){
            if(!isalnum(s[r])){
                r++;
            }else if(!isalnum(s[l])){
                l--;
            }else{
                if(tolower(s[r])!=tolower(s[l])){
                    return false;
                }else{
                    r++;
                    l--;
                }
            }
        }
        return true;
    }
};