// find minimum number among 3 numbers using ternary operator 
#include<stdio.h>
int main()
{
    int min,num1,num2,num3;
    printf("Enter number:");
    scanf("%d %d %d",&num1,&num2,&num3);

    min=(num1<num2)? ((num1 < num3) ? num1 : num3):((num2 < num3) ? num2 : num3);
    printf("Minimum number is :%d",min);

    return 0;

}