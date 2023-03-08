#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);
    switch (marks/10)
    {
    case 10:
    case  9:
        printf("your grade is A\n");
        break;
    case 8:
        printf("your grade is B\n");
        break;
    case 7:
        printf("your grade is C\n");
        break;
    case 6:
        printf("your grade is D\n");
        break;
    default:
        printf("your grade is F\n");
        break;
    }
    return 0;
}