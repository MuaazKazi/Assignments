//Write a C program to read the value of an integer m and display the value of m is 1 when m is larger than 0, 0 when m is 0 and -1 
//when m is less than 0
#include <stdio.h>

int main() {
    int m;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    int result;
    if (m > 0) {
        result = 1;
    } else if (m == 0) {
        result = 0;
    } else {
        result = -1;
    }
    printf("Value of m is: %d\n", result);

    return 0;
}