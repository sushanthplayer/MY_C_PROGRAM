#include <stdio.h>
int main(){
    int id;
    int PAN_NUMBER=01;
    int ADHAAR_NUMBER=02;
    int APPAR_ID=03;
    int DRVING_LICENSE=04;
    int PASSPORT=05;
    printf("enter the unique id ");
    scanf("%d",&id);
    switch(id){
        case 1:
        printf("PAN NUMBER verified");
        break;
        case 2:
        printf("ADHAAR NUMBER verified");
        break;
        case 3:
        printf("APPAR ID verified");
        break;
        case 4:
        printf("DRIVING LICENSE verified");
        break;
        case 5:
        printf("PAASPORT verified");
        break;
        default:
        printf("not verified");
    }
    }
