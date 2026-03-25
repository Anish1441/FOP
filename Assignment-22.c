#include <stdio.h>
#include <string.h>

int main() {
    char s[100], s2[100];
    int ch;

    scanf("%s", s);

    do {
        printf("\n1.Length 2.Reverse 3.Compare 4.Palindrome 5.Substring 6.Exit\n");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("%lu\n", strlen(s));
                break;

            case 2:
                strrev(s);
                printf("%s\n", s);
                break;

            case 3:
                scanf("%s", s2);
                if(strcmp(s, s2) == 0) printf("Equal\n");
                else printf("Not Equal\n");
                break;

            case 4:
                strcpy(s2, s);
                strrev(s2);
                if(strcmp(s, s2) == 0) printf("Palindrome\n");
                else printf("Not\n");
                break;

            case 5:
                scanf("%s", s2);
                if(strstr(s, s2)) printf("Found\n");
                else printf("Not Found\n");
                break;
        }
    } while(ch != 6);

    return 0;
}