class Solution {
public:
    long long solve(string &s, int i, long long num) {
        if (i >= s.size() || !isdigit(s[i]))
            return num;

        int digit = s[i] - '0';

        // Overflow check
        if (num > (LLONG_MAX - digit) / 10)
            return LLONG_MAX;

        return solve(s, i + 1, num * 10 + digit);
    }

    int myAtoi(string s) {
        int i = 0;

        // Skip spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        int sign = 1;

        // Check sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long num = solve(s, i, 0);

        num *= sign;

        // Clamp to 32-bit integer range
        if (num > INT_MAX)
            return INT_MAX;
        if (num < INT_MIN)
            return INT_MIN;

        return (int)num;
    }
};