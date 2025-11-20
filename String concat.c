#include<stdio.h>
#include<string.h>
   int main(){
     char gayle[333];
     printf("enter your string\n");
     scanf("%s",&gayle );
     printf("before concat %s\n", gayle);
     strcat(gayle, " universe boss");
     printf("after concat %s\n", gayle);
}
