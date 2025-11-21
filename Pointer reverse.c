#include<stdio.h>
 int revnumber(int *num){
     int n=*num;
     int rev =0;
     while(n>0){
         rev=rev*10+(n%10);
     }
     *num=rev;
 }
 int main(){
     int n =2;
    
     revnumber(&n);
     printf("%d",n);
 }
