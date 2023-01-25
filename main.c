#include <stdio.h>
int main()
{
    int a;
    printf("Enter Year you want to check\n");
    scanf("%d",&a);
    if ((a%100!=0 && a%4==0) || (a%400==0)){
        printf("Leap Year");
    }
    else{
        printf("Not a leap year");
    }
}