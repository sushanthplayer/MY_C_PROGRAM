#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    printf("enter the value of p\n");
    scanf("%d",&*p);
    p=(int*)malloc(17*sizeof(int));
    printf("%d",*p);
    free(p);
}
