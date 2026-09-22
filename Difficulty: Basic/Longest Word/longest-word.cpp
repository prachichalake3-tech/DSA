class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int i;
        string largest;
        for(i=0;i<arr.size();i++){
            if(largest.length() < arr[i].length()){
                largest = arr[i];
            }
        }
        return largest;
    }
};
