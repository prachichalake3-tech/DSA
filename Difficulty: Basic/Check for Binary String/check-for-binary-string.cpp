class Solution {
  public:
    bool isBinary(string& s) {
        //code here
        int i;
        
       for(i=0;i<s.size();i++){
           if(s[i]!='0'&& s[i]!='1'){
               return 0;
           }
           
          }
          return 1;
    }
};