#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    int total=500;
    int total_marks;
    float average;
    float percentage;
    printf("enter the five subject marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
     
    total_marks = (m1 + m2 + m3 + m4 + m5);

    
    average = total_marks/ 5;


    percentage = ((total_marks *100) /total);

    
    printf("\nTotal = %d", total);
    printf("\nAverage = %f", average);
    printf("\nPercentage = %f%%", percentage);

    return 0;
}