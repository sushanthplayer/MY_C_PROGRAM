#include<stdio.h>
#include<math.h>
int main(){
    int d,x1,x2,y1,y2;
    printf("enter a values for all\n");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
     d = sqrt(pow((x2 - x1) ,2) + pow((y2 - y1),2));

    printf("distance btween stright lines=%d",d);
}
