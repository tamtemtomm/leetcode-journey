int lengthOfLongestSubstring(char* s) {
    int map[128];
    for(int i = 0; i < 128; i++) map[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int end = 0; s[end] != '\0'; end++){
        char c = s[end];

        if (map[(int)c] >= start){
            start = map[(int)c] + 1;
        }

        map[(int)c] = end;
        int currLen = end - start + 1;
        if (currLen > maxLen){
            maxLen = currLen;
        }
    }

    return maxLen;
}