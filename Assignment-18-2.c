#include <stdio.h>

int main() {
    char s[100], s2[100];
    int i, len = 0, flag = 1;

    scanf("%s", s);

    // Length
    for(i = 0; s[i] != '\0'; i++)
        len++;

    printf("Length: %d\n", len);

    // Reverse
    printf("Reverse: ");
    for(i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");

    // Equality check
    scanf("%s", s2);
    for(i = 0; s[i] != '\0' || s2[i] != '\0'; i++) {
        if(s[i] != s2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Equal\n");
    else printf("Not Equal\n");

    // Palindrome
    flag = 1;
    for(i = 0; i < len/2; i++) {
        if(s[i] != s[len-i-1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    // Substring (manual)
    flag = 0;
    for(i = 0; s[i] != '\0'; i++) {
        int j, k;
        for(j = i, k = 0; s[j] == s2[k] && s2[k] != '\0'; j++, k++);
        if(s2[k] == '\0') {
            flag = 1;
            break;
        }
    }
    if(flag) printf("Substring found\n");
    else printf("Not found\n");

    return 0;
}