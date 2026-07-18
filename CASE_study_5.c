#include<stdio.h>
int main(){
    int principle,time;
    float rate;
    float simple_interest;
    printf("enter the principle");
    scanf("%d",&principle);
    printf("enter the rate");
    scanf("%f",&rate);
    printf("enter the time");
    scanf("%d",&time);

    simple_interest = (principle*time*rate)/100;
    printf("simple_interest=%f",simple_interest);
    return 0;
    
}