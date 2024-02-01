#include <stdio.h>
int fact(int);
void main()
{
    int num;
    printf("Enter your number :");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, fact(num));
}
int fact(int num)
{
    if (num >= 1)
        return num * fact(num - 1);
    else
        return 1;
}