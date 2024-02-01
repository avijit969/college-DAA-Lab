#include <stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2;
    printf("Enter two positive Integers :");
    scanf("%d%d", &num1, &num2);
    printf("G.C.D. of number %d and %d is %d", num1, num2, gcd(num1, num2));
}
int gcd(int num1, int num2)
{
    if (num2 != 0)
        return gcd(num2, num1 % num2);
    else
        return num1;
}