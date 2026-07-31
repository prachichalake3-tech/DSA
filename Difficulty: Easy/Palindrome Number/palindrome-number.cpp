class Solution {
  public:
    bool isPalindrome(int n) {
        int original = abs(n);
        int temp = original;
        int rev = 0;

        while(temp > 0) {
            rev = rev * 10 + temp % 10;
            temp = temp / 10;
        }

        if(original == rev)
            return 1;   
        else
            return 0;   
    }
};