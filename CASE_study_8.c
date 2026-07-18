#include<stdio.h>
int main(){
    int recharge;
    float GST=0.18;   //18%
    float total,final_GST, total_amount;

    printf("enter the  amount of recharge");
    scanf("%d", &recharge);

    final_GST= recharge*GST;

   total_amount= recharge+final_GST;

   printf("total_amount=%.2f", total_amount);

   return 0;

}