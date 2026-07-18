#include<stdio.h>
int main(){
    int product1,product2,product3;
    int subtotal;
    float final_GST,final_bill;
    float GST=0.18 ; //18%
    printf("enter the price of product1");
    scanf("%d",&product1);
    printf("enter the price of product2");
    scanf("%d",&product2);
    printf("enter the price of product3");
    scanf("%d",&product3);
    subtotal = (product1+ product2+ product3);
    final_GST= subtotal*GST;
    final_bill= subtotal+final_GST;

    printf("subtotal=%d",subtotal);
    printf("final_GST=%f",final_GST);
    printf("final_bill=%f",final_bill);
    return 0;
}