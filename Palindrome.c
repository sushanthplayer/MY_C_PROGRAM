#include<stdio.h>
int main(){
    int num=333,org,rev=0,rem;
    org=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
    if(org==rev){
        printf("num  is palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}
