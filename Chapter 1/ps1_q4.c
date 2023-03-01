#include <stdio.h>

int main()
{
    int principal = 20000000, year = 15, rate = 15;
    int simpleinterest = (principal * year * rate) / 100;
    printf("the amount of your simple interest is %d\n", simpleinterest);
    return 0;
}