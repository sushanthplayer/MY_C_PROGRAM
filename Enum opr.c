#include<stdio.h>
enum opr{
    add=1,
    sub,
    multi,
    divi
};
int main(){
   enum opr op;
   printf("enter  a opr(1-4)\n");
   scanf("%d",&op);
   if(op==add){
       printf("addation\n");
   } else if(op==sub){
       printf("subtraction");
   }
   else if(op==multi){
       printf("multipacation");
   }
   else{
       printf("other oper");
   }
   
}
