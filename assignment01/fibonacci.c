#include <stdio.h>
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}
int main()
{
    int num;
    printf("Enter your Nth number :");
    scanf("%d", &num);
    printf("%dth fibonacci number is %d", num, fibo(num - 1));
    return 0;
}