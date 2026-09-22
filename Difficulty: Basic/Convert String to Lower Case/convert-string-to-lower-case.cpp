class Solution {
  public:
    string toLower(string& s) {
        // code here
     int i;
        for(i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};