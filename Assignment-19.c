#include <stdio.h>
#include <string.h>

struct emp {
    char name[20], desig[20], gender;
    int salary;
};

int main() {
    int n, i, male=0, female=0;
    struct emp e[10];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %s %c %d", e[i].name, e[i].desig, &e[i].gender, &e[i].salary);
    }

    // Total
    printf("Total: %d\n", n);

    // Count gender
    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M') male++;
        else female++;
    }
    printf("Male: %d Female: %d\n", male, female);

    // Salary > 10000
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    // Asst Manager
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].desig, "AsstManager") == 0)
            printf("%s\n", e[i].name);
    }

    return 0;
}