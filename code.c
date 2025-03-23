// #include<stdio.h>
// int main(){
//     printf("Hello World");

// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age:");
//     scanf("%d",&age);
//     printf("The age is:%d\n",age);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number:");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", i); 
//     }

// }


// #include<stdio.h>
// int main(){
//     int age=25;
//     printf("%d\n",age);
    
// }


// #include<stdio.h>
// int main(){
// //     float age=25.68;
// //     printf("%f\n",age);
    
// // }



// // #include<stdio.h>
// // int main(){
// //     char age = 'A';
// //     printf("%d\n",age);
    
// // }

// // #include<stdio.h>
// // int main(){
// //     int age;
// //     printf("Enter your age:");
// //     scanf("%d",&age);
// //     printf("%d",age);
// // }
// #include<stdio.h>
// int main(){
//     int a=12;
//     int b=6;
//     int result1, result2, result3, result4, result5;
//     result1=a+b;
//     result2=a-b;
//     result3=a*b;
//     result4=a/b;
//      printf("Addition of %d and %d is %d\n", a, b, result1);
//     printf("Subtraction of %d and %d is %d\n", a, b, result2);
//     printf("Multiplication of %d and %d is %d\n", a, b, result3);
//     printf("Division of %d and %d is %d\n", a, b, result4);
    
    
    

// scanf("%d \n",&result1);
//    scanf("%d \n",&result2);
//   scanf("%d \n",&result3);
//  scanf("%d \n",&result4);
// }


// #include<stdio.h>
// int main(){
//     float pi=3.14;
//     float radius;
//     printf("Enter the radius of a circle:");
//     scanf("%f",&radius);
    
    
//     float area;
//     area=pi*radius*radius;
//     printf("The area of a circle is:%f\n",&area);
// }



// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age:");
//     scanf("%d",&age);

//     if(age>=18)
//     {printf("You are eligible for vote!");
//     }
//     else{
//         printf("You are not eligible for vote!");
//     }

// }



// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter ur Age:");
//     scanf("%d",&age);

//     if(age>=18)
//     {
//         printf("You are eligible");
//     }
//     else if(age>=60)
//     {
//         printf("You are old eligible");
//     }
//     else
//     {
//         printf("Not eligible");
//     }
// }



// #include <stdio.h>

// int main() {
//     int LanguageChoice, RechargeChoice;

//     printf("Press 1 for English\n");
//     printf("Press 2 for Hindi\n");
//     printf("Press 3 for Gujarati\n");
//     printf("Enter your Choice: ");
//     scanf("%d", &LanguageChoice);

//     switch (LanguageChoice) {
//         case 1:
//             printf("Press 1 for Internet Recharge\n");
//             printf("Press 2 for Top-up Recharge\n");
//             printf("Press 3 for Special Recharge\n");
//             printf("Enter your choice: ");
//             scanf("%d", &RechargeChoice);
//             break;
        
//         case 2:
//             printf("Internet Recharge ke liye 1 dabaye\n");
//             printf("Top-up Recharge ke liye 2 dabaye\n");
//             printf("Special Recharge ke liye 3 dabaye\n");
//             printf("Apni pasand darj kare: ");
//             scanf("%d", &RechargeChoice);
//             break;
        
//         case 3:
//             printf("Internet Recharge mate 1 dabavo\n");
//             printf("Top-up Recharge mate 2 dabavo\n");
//             printf("Special Recharge mate 3 dabavo\n");
//             printf("Tamari pasand darj karo: ");
//             scanf("%d", &RechargeChoice);
//             break;
        
//         default:
//             printf("Invalid Language Choice.\n");
//             return 1;
//     }

//     switch (RechargeChoice) {
//         case 1:
//             printf("You selected Internet Recharge.\n");
//             break;
//         case 2:
//             printf("You selected Top-up Recharge.\n");
//             break;
//         case 3:
//             printf("You selected Special Recharge.\n");
//             break;
//         default:
//             printf("Invalid Recharge Choice.\n");
//             return 1;
//     }

//     return 0;
// }



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



// #include<stdio.h>                       // code 2
// int main(){
//     int num1 , num2 , result ;

//     printf("Enter the number 1:");
//     scanf("%d",&num1);

//     printf("Enter the number 2:");
//     scanf("%d",&num2);

//     char ch ;
//     printf("Enter an operator (+, -, *, /, %%): ");
//     scanf(" %c", &ch);
     
//      switch(ch){
//         case '+':
//         result=num1 + num2;
//         printf("Addition : %d\n",result);
//         break;
        
//         case '-':
//         result=num1-num2;
//         printf("Subtraction : %d\n",result);
//         break;
        
//         case '*':
//         result=num1*num2;
//         printf("Multiplication : %d\n",result);
//         break;
        
//         case '/':
//         result=num1/num2;
//         printf("Division : %d\n",result);
//         break;

//         case '%':
//         result=num1%num2;
//         printf("Modulo: %d\n",result);
//         break;
        
//         default:
//         printf("Invalid Operator!");
        
//      }


// }





// #include <stdio.h>

// int main() {
//     int i, j;
    
//     for (i = 1; i <= 5; i++) {
//         for (j = 1; j <= 10; j++) {
//                 if (j<=i){
//                         printf("%d",j);
//                 }
//                 else if (j>(10-i)){
//                         printf("%d",11-j);
//                         // printf("a");
//                 }
//                 else {
//                         printf(" ");
//                 }
//                 }
//                 printf("\n");
//         }
//}
//             printf("%d ", j);  
        
//         int spaces = (n - i) * 2;
//         for (j = 1; j <= spaces; j++) 
//             printf("  ");  

//         if (i < n) { 
//             for (j = i; j >= 1; j--) 
//                 printf("%d ", j); 
//         } else { 
//             for (j = i - 1; j >= 1; j--) 
//                 printf("%d ", j);
//         }

//         printf("\n");
//     }

   
// }
#include<stdio.h>
int main(){
        int a;
        int b;
        int c=a+b;
        printf("enter the first number:");
        scanf("%d",&c);
        printf("enter the second number:");
        scanf("%d",&c);
       
      
}