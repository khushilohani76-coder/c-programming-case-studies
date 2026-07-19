#include<stdio.h>
int main(){
    int milk,bread,rice;
    int subtotal;
    float final_GST,final_bill;
    float GST=0.18 ; //18%
    printf("enter the price of milk");
    scanf("%d",&milk);
    printf("enter the price of bread");
    scanf("%d",&bread);
    printf("enter the price of rice");
    scanf("%d",&rice);
    subtotal = (milk+ bread+ rice);

    final_GST= subtotal*GST;

    final_bill= subtotal+final_GST;

    printf("subtotal=%d",subtotal);

    printf("final_GST=%f",final_GST);

    printf("final_bill=%f",final_bill);
    
    return 0;
}