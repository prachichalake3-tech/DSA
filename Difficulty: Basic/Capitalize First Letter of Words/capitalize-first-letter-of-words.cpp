class Solution {
  public:
    string convert(string& s) {
        // code here
        int i;
        s[0]=toupper(s[0]);
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
            s[i+1]=toupper(s[i+1]);
        }
        }
        return s;
    }
};