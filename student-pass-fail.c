#include <stdio.h>
int main()  {

    int marks;

    printf("enter students marks : ");
    scanf("%d", &marks);

    if(marks>=100) {
        printf("INVALID MARKS\n");

    } else if(marks<30) {

        printf("FAIL\n");

    } else {

        printf("PASS");
    }
    return 0;
}