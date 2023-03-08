#include<stdio.h>

int main()
{
    int age;
    printf("what is your age?\n");
    scanf("%d", &age);
    if (age >=90)
    {
        printf("you cannot drive,you`re not eligible\n");
    }
    else
    {
        printf("congrats, you can drive\n");
    }

    if (age == 50)
    {
        printf("and also congrats for half century\n");
    }
    
    return 0;
}