//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
