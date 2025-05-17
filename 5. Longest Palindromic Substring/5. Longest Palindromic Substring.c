#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void expandAroundCenter(const char *s, int left, int right, int* start, int* maxLen){
    int len = strlen(s);
    while(left >= 0 && right < len && s[left] == s[right]){
        left--;
        right++;
    }

    int newLen = right - left - 1;
    if (newLen > *maxLen){
        *start = left + 1;
        *maxLen = newLen;
    }
}

char* longestPalindrome(char* s) {
    int len = strlen(s);
    if (len == 0) return "";

    int start = 0, maxLen = 1;

    for (int i = 0; i < len; i++){
        // Odd length palindrome
        expandAroundCenter(s, i, i, &start, &maxLen);

        // Even length palindrome
        expandAroundCenter(s, i, i+1, &start, &maxLen);
    }

    // Allocate memory for result + null terminator
    char* result = (char*)malloc(sizeof(char) * (maxLen + 1));
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
    return result;
}