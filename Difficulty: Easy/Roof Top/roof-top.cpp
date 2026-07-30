class Solution {
  public:
    int maxStep(vector<int>& arr) {
        // code here
        int con =0;
        int max =0;
        
        for(int i=0; i<arr.size()-1;i++){
            if(arr[i+1]>arr[i]){
                con++;
                if(con>max)
                 max = con;
                 
            }else{
                con =0;
            }
        }
        return max ;
    }
};