class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int i;
        int count =0;
        for(i=0;i<arr.size();i++){
            if(arr[i] == 0){
                count++;
            }
            
            
        }
        for(i=0;i<arr.size();i++){
            if(count <= i ){
                arr[i] = 1;
            }
            else{
              arr[i] = 0;
            }
        }
    }
};
