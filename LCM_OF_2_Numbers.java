class Solution {
    static int lcm(int a, int b) {
        
        int start = Math.max(a, b);

        while (true) {
            if (start % a == 0 && start % b == 0) {
                return start;
            }
            start++;
        }
    }
}
