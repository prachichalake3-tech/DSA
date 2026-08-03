class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int low =0;
        int high = n-1;
        
        while(low<=high){
           int  mid = low + (high - low)/2;
            
            if(arr[mid]== k){
                return 1;
                
            }
            else if(k> arr[mid]){
                low = mid+1;
                
            }
            else
              high = mid -1;
        }
        return 0;
            
        
       
        
    }
};