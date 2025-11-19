#include<stdio.h>
int main(){
    int n[7]={1,3,4,2,5,6,7};
    int max=n[0];
    for( int i=1;i<7;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    printf("%d",max);
}
