#include <string.h>

char* longestCommonePrefix(char** strs, int strsSize){
    if (strsSize == 0) return "";

    int i = 0;
    while (1){
        char c = strs[0][i];
        if (c == NULL) break;

        for (int j = 0; j < strsSize; j++){
            if (strs[j][i] != c || strs[j][i] == NULL){

                // Allocate memory and result
                char* prefix = (char *)malloc(i + 1);
                strncpy(prefix, strs[0], i);
                prefix[i] = NULL;
                return prefix;
            }
        }

        i++;
    }

    return strs[0];
}