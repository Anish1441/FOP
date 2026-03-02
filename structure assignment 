#include <stdio.h>
struct student{
    char name[50];
    int rno;
    float m1,m2,result;
};
int main() {
    struct student s[3];
    int i;
    printf("enter student details:\n");
    for (i=0;i<3;i++){
        printf("enter student name:");
        scanf("%s",s[i].name);
        printf("enter student roll number:");
        scanf("%d",&s[i].rno);
        printf("enter student marks:");
        scanf("%f",&s[i].m1);
        printf("enter student marks:");
        scanf("%f",&s[i].m2);
    }
    printf("student results are : \n");
    for (i=0;i<3;i++){
        printf("%d",s[i].rno);
        printf("%s\n",s[i].name);
        printf("student result is : \n");
        printf("%f\n",s[i].result=(s[i].m1+s[i].m2)/2);
    }
    return 0;
}