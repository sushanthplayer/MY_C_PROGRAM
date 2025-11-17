//Simple Interst 
#include <stdio.h>
int main() 
 { 
    int p,t,r;
    float si;
    printf("Enter the principle amount\n");
    scanf("%d",&p);
    printf("Enter the time\n");
    scanf("%d",&t);
    printf("Enter the rate of interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("simple interest=%d\n",si);
    return 0;
 }
