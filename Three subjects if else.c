#include<stdio.h>
int checkpass(int m1,int m2,int m3){
    if(m1>=40 &&m2>=40&& m3>=40){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int sub1,sub2,sub3;
    float average;
    printf("enter a subjects\n");
    scanf(" %d %d %d",&sub1,&sub2,&sub3);
    average=(sub1+sub2+sub3)/3.0;
    printf("avg marks=%d",average);
    if(checkpass(sub1,sub2,sub3)){
        printf("result passed");
    }
    else{
        printf("result failed");
    }
    
}
