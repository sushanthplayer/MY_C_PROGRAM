#include <stdio.h>
int swapbalance(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("enter the balance of a & b");
    scanf("%d %d",&a,&b);
    printf("before the swapping: %d %d\n",a,b);
    swapbalance(&a, &b);
    printf("after the swapping: %d %d\n",a,b);
}
