class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
        
        int max =arr[arr.size()-1];
        ans.push_back(max);
        for(int i =arr.size()-2;i>=0;i--){
            if(arr[i]>= max){
                max = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};