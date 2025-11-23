#include <stdio.h>

int main() {
    char str[200], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // If not space or newline → part of a word
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            // Word ended → check length
            if (currLen > maxLen) {
                maxLen = currLen;
                for (j = 0; j < currLen; j++)
                    longest[j] = str[i - currLen + j];
                longest[currLen] = '\0';
            }
            currLen = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
