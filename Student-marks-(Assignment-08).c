#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float total, avg;

    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if(m1<40 || m2<40 || m3<40 || m4<40 || m5<40) {
        printf("Fail");
    } else {
        total = m1 + m2 + m3 + m4 + m5;
        avg = total / 5;

        if(avg >= 75)
            printf("Distinction");
        else if(avg >= 60)
            printf("First Division");
        else if(avg >= 50)
            printf("Second Division");
        else
            printf("Third Division");
    }
    return 0;
}