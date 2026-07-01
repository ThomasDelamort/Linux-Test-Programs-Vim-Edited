#include <stdio.h>


int main () {
    
    char name[50];
    int month = 0;
    int day = 0;

    printf("What is your name? ");
    scanf("%s", &name);

    printf("What month were you born? ");
    scanf("%d", &month);

    return 0;
}
