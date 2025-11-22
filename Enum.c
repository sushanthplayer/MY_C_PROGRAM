#include<stdio.h>
enum month{
    jan,
    feb,
    mar,
    apr,
    may,
    june,
    july,
    aug,
    sep,
    oct,
    nov,
    dec,
};
int main(){
    enum month today;
    today = aug;
    printf("%d",today);
}
