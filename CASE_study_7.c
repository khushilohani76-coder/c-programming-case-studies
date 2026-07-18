#include<stdio.h>
int main(){
    int weight,rate,total_charge;

    printf("enter the weight");
    scanf("%d",&weight);
    printf("enter the rate");
    scanf("%d",&rate);

    total_charge = weight*rate;
    printf("total charge =%d",total_charge);

    return 0;
}