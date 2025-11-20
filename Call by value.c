#include<stdio.h>
#include<string.h>
int main(){
    int x,y,temp;
    printf("enter the value of x,y\n");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);
}
