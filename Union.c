#include <stdio.h>
union Data{
    int age;
    float mark;
};
int main() {
    union Data p;
     p.age=25;
    printf("%d\n", p.age);
    p.mark=75.4;
    printf("%f",p.mark);
}
