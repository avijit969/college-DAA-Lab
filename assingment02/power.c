#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    printf("Enter your two number x and y: ");
    scanf("%lf%lf",&x,&y);
    printf("power of x to y is %.2lf",pow(x,y));

}