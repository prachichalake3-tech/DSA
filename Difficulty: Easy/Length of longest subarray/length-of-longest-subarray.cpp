class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int count = 0;
        int subarray = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 0) {
                count++;

                if (count > subarray) {
                    subarray = count;
                }
            }
            else {
                count = 0;
            }
        }

        return subarray;
    }
};