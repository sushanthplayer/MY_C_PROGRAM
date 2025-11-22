#include<stdio.h>
void swapbyvalue(int a,int b)
{
    int temp=a;
    a = b;
    b = temp;
   printf("Preview Swap (By Value): %d %d\n", a, b);
}
void swapbyreference(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("Actual Swap (By Reference): %d %d\n", *a, *b);
}
int main()
{
int x, y;
printf("Enter two currency values: ");
scanf("%d %d", &x, &y);
swapbyvalue(x,y);
printf("After Call by Value: %d %d\n", x,y);
swapbyreference(&x, &y);
printf("After Call by Reference: %d %d\n",x,y);
}
