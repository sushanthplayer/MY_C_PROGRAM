#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if (marks>=90){
        printf("Grade A\n");
    }
    else if (marks>=75){
        printf("Grade B");
    }
    else if (marks>=60){
        printf("Grade C");
    }
    else if (marks>=50){
        printf("Grade D");
    }
    else if (marks<=50){
        printf("Grade F");
    }
    
}
