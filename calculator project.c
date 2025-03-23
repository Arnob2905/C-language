#include<stdio.h>
double add(double a,double b);
double subtract(double a,double b);
double multiply(double a,double b);
double divide(double a,double b);
int modulus(int a,int b);

int main(){
    int choice;
    double num1,num2;
    int int1,int2;
    
    
    do{
        printf("\n Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 0){
            printf("Exiting the program.\n");
            break;
        }
        
        if(choice == 5){
            printf("Enter the first number:");
            scanf("%d",&int1);
            printf("Enter the second number:");
            scanf("%d",&int2);
        }
        else{
            printf("Enter the first number:");
            scanf("%lf",&num1);
            printf("Enter the second number:");
            scanf("%lf",&num2);
        }
        
        switch(choice){
            case 1:
            printf("Addition of %.2lf and %.2lf is %.2lf\n", num1, num2, add(num1, num2));
            break;
            case 2:
            printf("Subtraction of %.2lf and %.2lf is %.2lf\n", num1, num2, subtract(num1, num2));
            break;
            case 3:
            printf("Multiplication of %.2lf and %.2lf is %.2lf\n", num1, num2, multiply(num1, num2));
            break;
            case 4:
                if (num2 != 0)
            printf("Division of %.2lf and %.2lf is %.2lf\n", num1, num2, divide(num1, num2));
                else
            printf("Error! Division by zero is not allowed.\n");
                break;
            case 5:
                if (int2 != 0)
            printf("Modulus of %d and %d is %d\n", int1, int2, modulus(int1, int2));
                else
            printf("Error! Modulus by zero is not allowed.\n");
                break;
            default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (1);
    
    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

        
    
