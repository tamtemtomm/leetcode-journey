char* intToRoman(int num) {
    // Define Roman numeral mappings
    int values[] = {1000, 900, 500, 400, 100, 90,
                    50, 40, 10, 9, 5, 4, 1};
    const char* symbols[] = {"M", "CM", "D", "CD", "C", "XC",
                             "L", "XL", "X", "IX", "V", "IV", "I"};

    // Allocate a large enough buffer
    char* result = malloc(32); // Max Roman numeral length < 20
    result[0] = '\0'; // Initialize as empty string

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(result, symbols[i]);
            num -= values[i];
        }
    }

    return result;
}