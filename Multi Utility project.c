//Q1. Temperature Converter.........
//     °F = (9/5 × °C) + 32


#include<stdio.h>
int main(){
  float celsius;
    printf("Enter the Temperature in celsius:");
    scanf("%f",&celsius);

    float fahrenheit = (9.0 / 5.0 * celsius) + 32 ;
    printf("The value of Temperature in Fahrenheit is:%f\n",fahrenheit);


}



Q2. Gross Salary Calculator........
    

#include<stdio.h>
int main(){
    float BaseSalary,HRA,DA,TA;
    printf("The Base Salary is:");
    scanf("%f",&BaseSalary);

    printf("The HRA(in %%) is:");
    scanf("%f",&HRA);

    printf("The DA(in %%) is:");
    scanf("%f",&DA);

    printf("The TA(in %%) is:");
    scanf("%f",&TA);

    float GrossSalary;
    HRA = (HRA / 100) * BaseSalary;
    DA =  (DA  / 100) * BaseSalary;
    TA =  (TA / 100) * BaseSalary;


    GrossSalary = BaseSalary + (HRA)+(DA)+(TA);
    printf("The  value of Gross Salary is: %f\n",GrossSalary);
    
    
}    



Q3. Triangle Angle Finder.......


#include<stdio.h>
int main(){
    float RightAngledTriangle,FirstAngle,SecondAngle;
    
    printf("The value of First Angle is :");
    scanf("%f",&FirstAngle);

    printf("The value of Second Angle is :");
    scanf("%f",&SecondAngle);

    RightAngledTriangle = 180;

    float ThirdAngle;
    ThirdAngle = RightAngledTriangle - (FirstAngle + SecondAngle); 
    printf("The value of Third Angle is :%f\n",ThirdAngle);





}