#include <stdio.h>
int main() {
    char firstName[50], lastName[50], fullName[100];
    int i, j, length = 0, maxLength=19;
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    
     i = 0;
    while (firstName[i] != '\0') {
        fullName[i] = firstName[i];
        i++;
    }
    fullName[i] = ' ';
    i++;
    j = 0;
    while (lastName[j] != '\0') {
        fullName[i] = lastName[j];
        i++;
        j++;
    }
   fullName[i] = '\0';
   length = 0;
    while (fullName[length] != '\0') {
        length++;
    }
    printf("Full Name: %s\n", fullName);
    printf("Length of Full Name: %d\n", length);
    if (length > maxLength) {
        printf("Warning: Name exceeds screen length!\n");
    } else {
        printf("Name fits the screen.\n");
    }
}
