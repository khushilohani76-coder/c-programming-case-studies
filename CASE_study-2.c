#include<stdio.h>
int main(){
    int basic_salary;
    float HRA= 0.20; //20%
    float DA= 0.40; //40%
    float net_salary,salary_HRA,salary_DA;
    printf("enter the basic_salary");
    scanf("%d",&basic_salary);
    salary_HRA = HRA*basic_salary;
    salary_DA = DA*basic_salary;
    net_salary= basic_salary + salary_HRA + salary_DA;
     
    printf("net_salary=%f",net_salary);
    printf("HRA=%F",salary_HRA);
    printf("DA=%F",salary_DA);
    return 0;

}