class Solution {
public:
    bool isPalindrome(string s) {
        string w;
        for(int i = 0; i<s.size(); i++){
            if(isalnum(s[i])) w.push_back(tolower(s[i]));
        }
        int i = 0, j = w.size()-1;
        while(i<=j){
            if(w[i]!= w[j]) return false;
            i++; j--;
        }
        return true;
    }
};
