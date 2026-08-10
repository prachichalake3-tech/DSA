class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int low=0;
        int high=arr.size()-1;
        int sum =0;
        
        while(low < high){
            sum = arr[low] + arr[high];
        if(sum == target){
                return{low+1,high+1};
            }
        else if(sum<target){
            low++;
        }
        else{
          high--;
        }
        
        }  
        return{-1,-1};
    }
};