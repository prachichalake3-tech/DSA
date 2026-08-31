class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>original;
            
        int i;
        for(i=0;i<arr.size();i++){
            
            if(arr[i] != arr[i+1]){
              original.push_back(arr[i]);
              
            }
        }
             return original;
        
       
    }
};