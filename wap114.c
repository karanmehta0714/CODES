#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    s[strcspn(s, "\n")] = '\0';

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int start = 0, maxLen = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
        last[c] = i;
    }

    printf("%d\n", maxLen);
    return 0;
}
