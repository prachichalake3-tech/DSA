class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int sum = 0;
        int subarr = n + 1;

        for (int end = 0; end < n; end++) {
            sum += arr[end];

            while (sum > x) {
                int len = end - start + 1;

                if (len < subarr) {
                    subarr = len;
                }

                sum -= arr[start];
                start++;
            }
        }

        if (subarr == n + 1) {
            return 0;
        }

        return subarr;
    }
};