#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float D, realPart, imagPart, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation.\n");
    }
    D = b*b - 4*a*c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
    } 
    else if (D == 0) (2*a);
        printf("Root{
        root1 = -b / s are real and equal: %.2f\n", root1);
    } 
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}
