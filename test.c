#include <stdio.h>

#define SIZE 20


int main(void)
{
    char name[SIZE];

    printf("%s", "Enter your name((0 - 19) characters): ");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}