// #include<stdio.h>                 code 1
// int main(){
//     int a=20;
//     int b=5;
//      char ch ='*';
//      switch (ch){
//         case '+':
//         printf("Addition : %d",a+b);
//         break;

//         case '-':
//         printf("Subtraction : %d",a-b);
//         break;

        // case '*':
        // printf("Multiplication : %d",a*b);
        // break;
        
//         case '/':
//         printf("Division : %d",a/b);
//         break;
        
//         case '%':
//         printf("Module : %d",a%b);
//         break;
        
//         default:
//         printf("Invalid Operator");
//      }
        
        

// }



#include<stdio.h>                       // code 2
int main(){
    int num1 , num2 , result ;

    printf("Enter the number 1:");
    scanf("%d",&num1);

    printf("Enter the number 2:");
    scanf("%d",&num2);

    char ch ;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &ch);
     
     switch(ch){
        case '+':
        result=num1 + num2;
        printf("Addition : %d\n",result);
        break;
        
        case '-':
        result=num1-num2;
        printf("Subtraction : %d\n",result);
        break;
        
        case '*':
        result=num1*num2;
        printf("Multiplication : %d\n",result);
        break;
        
        case '/':
        result=num1/num2;
        printf("Division : %d\n",result);
        break;

        case '%':
        result=num1%num2;
        printf("Modulo: %d\n",result);
        break;
        
        default:
        printf("Invalid Operator!");
        
     }


}