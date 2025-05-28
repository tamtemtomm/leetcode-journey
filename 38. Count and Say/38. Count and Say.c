#include <string.h>

char* countAndSay(int n) {
    if (n == 1) {
        char* base = malloc(2); // '1' and '\0'
        strcpy(base, "1");
        return base;
    }

    char* prev = countAndSay(n - 1);
    int len = strlen(prev);
    int i = 0;

    char* result = malloc(len * 2 + 1);
    int resIndex = 0;

    while (i < strlen(prev)){
        char digit = prev[i];
        int count = 1;

        while ( i + 1 < len && prev[i] == prev[i+1]){
            count++;
            i++;
        }

        resIndex += sprintf(result + resIndex, "%d%c", count, digit);
        i++;
    }

    result[resIndex] = '\0';
    free(prev);
    return result;
}