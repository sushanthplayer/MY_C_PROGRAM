#include <stdio.h>
struct student{
    int age;
    float marks;
};
int main() {
    struct student s;
   printf("enter the  student age & marks");
   scanf("%d %f",&s.age,&s.marks);
   printf("age:%d marks:%f",s.age,s.marks);
}
