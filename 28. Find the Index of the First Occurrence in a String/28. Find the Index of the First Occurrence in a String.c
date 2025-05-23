#include <string.h>

int strStr(char* haystack, char* needle) {

    int len = strlen(needle);

    for (int i = 0; haystack[i] != '\0'; i++){
        if (haystack[i] == needle[0]){
            if (strncmp(haystack + i, needle, len) == 0) {
                return i; // Found the needle at index i
            }
        }
    }

    return -1;
}