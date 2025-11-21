#include <stdio.h>
struct names {
    int age;
    char name[12];
    float marks;
};
int main() {
    struct names H[2];  
    for(int i = 0; i < 2; i++) {
        printf("Enter the age for person %d: ", i + 1);
        scanf("%d", &H[i].age);
        printf("Enter the name for person %d: ", i + 1);
        scanf("%s", H[i].name);
        printf("Enter the marks for person %d: ", i + 1);
        scanf("%f", &H[i].marks);
        printf("\n");
    }
    for(int i = 0; i < 2; i++) {
        printf("Details of person %d: %d, %s, %.2f\n", i + 1, H[i].age, H[i].name, H[i].marks);
    }
}
