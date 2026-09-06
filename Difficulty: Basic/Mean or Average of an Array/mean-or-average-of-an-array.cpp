class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int i, sum =0;
        int mean;
        for(i=0;i<arr.size();i++){
            sum =sum + arr[i];
        }
        mean = sum/arr.size();
        
        return mean;
    }
};