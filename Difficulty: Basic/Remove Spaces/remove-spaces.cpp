class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int i;
        string s1;
        for(i=0 ; i<s.size() ; i++){
            if(s[i]!=' '){
                s1 +=s[i];
            }
        }
        return s1;
    }
};