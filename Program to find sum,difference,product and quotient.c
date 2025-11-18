#include <stdio.h>
int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    int sum = x+y;
    int difference = x - y;
    int product = x *y;
    printf("\nSum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    if (y != 0) {
        int quotient = x / y;
        printf("Quotient = %d\n", quotient);
    } else {
        printf("no division is possible\n");
    }
}
