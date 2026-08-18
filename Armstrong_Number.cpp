class Solution {
    static boolean armstrongNumber(int n) {
        int start = n;
        int digits = String.valueOf(n).length();
        int sum = 0;
        while(n>0)
        {
            int digit = n % 10;
            sum += Math.pow(digit,digits);
            n /= 10;
        }
        return sum == start;
    }
}
