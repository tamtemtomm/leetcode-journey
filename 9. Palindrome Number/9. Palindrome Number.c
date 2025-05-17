#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)){
        return false;
    }

    int reversed_half = 0;
    while (x > reversed_half){
        reversed_half = reversed_half * 10 + x % 10;
        x = x / 10;
    }


    return x == reversed_half || x == reversed_half / 10;
}