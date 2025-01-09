/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2e31, 2e31 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

class Solution {
public:
    bool willMultiplyOverflow(int a, int b) {
        // Handle zero cases
        if (a == 0 || b == 0) {
            return false; // No overflow if one number is 0
        }

        // INT_MIN corner case for negative numbers
        if (a == INT_MIN || b == INT_MIN) {
            // Multiplication with anything other than -1 will overflow
            return !(b == -1 || a == -1);
        }

        // Compare absolute values to prevent overflow
        if (std::abs(a) > INT_MAX / std::abs(b)) {
            return true; // Overflow will occur
        }

        return false; // No overflow
    }

    bool willAddOverflow(int a, int b) {
        if (a > 0 && b > 0) {
            // Positive overflow: a + b > INT_MAX
            if (a > INT_MAX - b) {
                return true;
            }
        } else if (a < 0 && b < 0) {
            // Negative overflow: a + b < INT_MIN
            if (a < INT_MIN - b) {
                return true;
            }
        }
        // No overflow in other cases
        return false;
    }

    int reverse(int x) {
        if (x == INT_MIN) return 0;
        
        int rev = 0;
        int num = x;
        int sign = (x > 0) - (x < 0);

        num = num * sign;
        while (num > 0) {
            if (willMultiplyOverflow(10, rev)) return 0;
            if (willAddOverflow(10 * rev, (num % 10))) return 0;
            rev = 10 * rev + (num % 10);
            num = num / 10;
        }
        rev = rev * sign;

        return rev;
    }
};