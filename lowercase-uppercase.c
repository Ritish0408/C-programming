#include <stdio.h>
int main()  {
    char ch;

    printf("enter charchter: ");
    scanf("%c", &ch);

    if(ch>= 'A' && ch<= 'Z') {

        printf("UPPERCASE\n");

    } else if(ch>= 'a' && ch<= 'z') {
        printf("LOWERCASE\n");

    } else {

        printf("not english letter");
    }
    return 0;
}
