#include<stdio.h>
int  siclalucator(){
   int p,t,r,si;
   printf("enter a principal\n");
   scanf("%d",&p);
   printf("enter a time\n");
   scanf("%d",&t);
   printf("enter a rate  of intrest\n");
   scanf("%d",&r);
   si=(p*t*r)/100;
   printf("simple intrest=%d\n",si);
}
int main(){
    siclalucator();
    
}
