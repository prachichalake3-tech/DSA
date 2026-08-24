class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size() - 1;
        int maxArea = 0;

        while (i < j) {
            int height = min(arr[i], arr[j]);
            int width = j - i;
            int area = height * width;

            if (area > maxArea) {
                maxArea = area;
            }

            if (arr[i] < arr[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return maxArea;
    }
};