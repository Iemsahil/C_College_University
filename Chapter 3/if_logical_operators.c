#include <stdio.h>

int main()
{
    int age;
    int vippass = 1;
    printf("what is your age?\n");
    scanf("%d", &age);

    if (age <= 70 &&age >= 18 )
    //||  !vippass == 1
    // by vippass rules kaam nhii krega aur ! isse true false aur false true hojayega
    {
        printf("you are eligible,you can drive\n");
    }
    else
    {
        printf("sorry,you can`t drive\n");
    }

    return 0;
}