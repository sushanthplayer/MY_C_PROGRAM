#include<stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int*) calloc(5 ,sizeof(int));
    printf("%d\n",*arr);
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
     printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
