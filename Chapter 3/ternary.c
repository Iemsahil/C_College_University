#include <stdio.h>

int main()
{
    int a;
    printf("enter a\n");
    scanf("%d", &a);
 // one liner
    (a > 5) ? printf("a is more than 5\n") : printf("a is more than 5\n");
    return 0;
}