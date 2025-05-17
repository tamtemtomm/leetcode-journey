#include <string.h>
#include <ctype.h>
#include <limits.h>

int myAtoi(char* s) {
    int i = 0;
    int result = 0;
    int sign = 1;
    int n = strlen(s);

    // Step 1: Skip leading whitespaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Step 2: Check the sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Convert digits and stop on the first non-digit
    while (i < n && isdigit((unsigned char)s[i])) {
        int digit = s[i] - '0';

        // Step 4: Check for overflow/underflow
        if (result > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}