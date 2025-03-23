// Lab work #1.2


// #include<stdio.h>       1
// int main(){
//     printf("Arnob Maity");
//     printf("\n 18");
//     printf("\n SSGITS");
// }


// #include<stdio.h>       2
// int main(){
//     printf("*\n");
//     printf("|\t|\n");
//     printf("R\t|\n");
//     printf("N\t|\n");
//     printf("W\t|\n");
//     printf("|\t|\n");
//     printf("*\n");
// }



// #include<stdio.h>        3 
//  int main(){
//     printf("*\n");
//     printf("* *\n");
//      printf("* * *\n");
//      printf("* *\n");
//     printf("*\n");
//  }


// #include<stdio.h>          4 
//  int main(){
//     printf("*\n");
//      printf("*\n");
//       printf("*\n");
//        printf("* \t  * *  \t *\n");
//         printf("*  *    *     * \n");
//          printf("*   \t   *\n");
//           printf("* * \t **\n");
//            printf("* *\n");
//             printf("*\n");
//  }



//    Lab work #2.1

// #include<stdio.h>                1
// int main(){
//     int a=12;
//     int b=6;
//     int result1, result2, result3, result4, result5;
//     result1=a+b;
//     result2=a-b;
//     result3=a*b;
//     result4=a/b;
//     result5=a%b;

//     printf("Addition of %d and %d is %d\n", a, b, result1);
//     printf("Subtraction of %d and %d is %d\n", a, b, result2);
//     printf("Multiplication of %d and %d is %d\n", a, b, result3);
//     printf("Division of %d and %d is %d\n", a, b, result4);
//     printf("Modulo of %d and %d is %d\n", a, b, result5);
    
//     scanf("%d \n",&result1);
//     scanf("%d \n",&result2);
//     scanf("%d \n",&result3);
//     scanf("%d \n",&result4);
//     scanf("%d \n",&result5);
// } 


// #include<stdio.h>        2
// int main(){
//     int a=5;
//     int square=a*a;
//     printf(" ---------\n");
//     printf("| \t |\n");
//     printf("| %d*%d=%d |\n",a,a,square);
//     printf("| \t |\n");
//     printf(" ---------");

// }



// Lab Work #2.2

// #include<stdio.h>           1
// int main(){
//     float pie=3.14;
//     float radius;
//     printf("Enter the radius of a circle:");
//     scanf("%f",&radius);
//     float area;
//     area=pie*radius*radius;
//     printf("The area of a circle is:%f\n",area);
// }



// #include<stdio.h>                              2  #rectangle
// int main(){
//     float length,width;
//     printf("Enter the length of rectangle:");
//     scanf("%f",&length);
//       printf("Enter the width of rectangle:");
//     scanf("%f",&width);
//     float area=length*width;
//     printf("The area of the rectangle is:%f\n",area);
    
// }


// #include<stdio.h>                              2 #square
// int main(){
//     float length;
//     printf("Enter the length of square:");
//     scanf("%f",&length);
//     float area=length*length;
//     printf("The area of the square is:%f\n",area);
    


// }


// #include<stdio.h>                  3
// int main(){
//     float a=0.5;
//     float base,height;
//     printf("The base of a triangle:");
//     scanf("%f",&base);
//     printf("The height of a triangle:");
//     scanf("%f",&height);
//     float  area = a*base*height;
//     printf("The area of a triangle is:%f\n",area);


// }




// #include<stdio.h>            4
// int main(){
//     float principle,rate,time;
//     printf("The value of Principle:");
//     scanf("%f",&principle);
//     printf("The value of rate(in %%):");
//     scanf("%f",&rate);
//     printf("The no. of time(in month):");
//     scanf("%f",&time);
//     float interest= (principle*rate*time)/100*1/12 ;
//     printf("The interest is :%f\n",interest);
//  }




// #include<stdio.h>                 5
// int main(){
//     float pie=3.14;
//     float radius;
    
//     printf("The value of radius:");
//     scanf("%f",&radius);
//     float perimeter= 2*pie*radius;
//     printf("The perimeter of a circle is :%f\n",perimeter);

// }




// Lab Work #4.1

// #include<stdio.h>                   1
// int main(){
//     int x;
//     int y;
//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     printf("Enter the value of y:");
//     scanf("%d",&y);

//     int result=(x + y) * (x + y);
//    printf("The result of (x + y)^2 is:%d\n",result);

// }



// #include<stdio.h>                   2
// int main(){
//     int x;
//     int y;
//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     printf("Enter the value of y:");
//     scanf("%d",&y);
    
//     int result=(x - y) * (x - y);
//    printf("The result of (x - y)^2 is:%d\n",result);

// }


// #include<stdio.h>                         3
// int main(){
//     int x;
//     int y;
//     printf("Enter the value of x:");
//     scanf("%d",&x);
//     printf("Enter the value of y:");
//     scanf("%d",&y);
    
//     int result=(x + y) * (x + y) * (x + y);
//    printf("The result of (x + y)^3 is:%d\n",result);

// }



// #include<stdio.h>                       
// int main(){                   4
//     int a,b,c;
//     printf("Enter two numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping:a=%d,b=%d\n",a,b);
//     c=a;
//     a=b;
//     b=c;
//         printf("After swapping:a=%d,b=%d\n",a,b);
// }




// #include<stdio.h>              5
// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping:a=%d,b=%d\n",a,b);

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     printf("After swapping:a=%d,b=%d\n",a,b);
// }



//Lab Work #5.1.....



// #include<stdio.h>                         1.
// int main(){
//     int num1,num2;
//     printf("Enter a value of First Number:");
//     scanf("%d",&num1);

//     printf("Enter a value of Second Number:");
//     scanf("%d",&num2);

//     if(num1>num2){
//         printf("Maximum Number!");
//     }
//     else{
//         printf("Minimum Number!");
//     }
// }



// #include<stdio.h>                         2.
// int main(){
//     int num;
//     printf("Enter a Number:");
//     scanf("%d",&num);

//     if(num>0){
//     printf("Positive Number!");
// }
// else if(num<0){
//     printf("Negative Number!");
// }
// else{
// printf("Neutral Number!");
// }
// }





// #include<stdio.h>                                3.
// int main(){
//     float maths;
//     printf("Enter marks of maths (0-100):");
//     scanf("%f",&maths);
//     float english;
//     printf("Enter marks of english (0-100):");
//     scanf("%f",&english);
//     float science;
//     printf("Enter marks of science (0-100):");
//     scanf("%f",&science);

   
//    float average= (maths+ english+ science)/3;
//     printf("The Average Marks is:%2f\n",average);
// }





// Lab Work #5.2.......



// #include<stdio.h>                                  1.
// int main(){
//     int num1,num2,num3,min;
//     printf("Enter a value of First Number:");
//     scanf("%d",&num1);
//     printf("Enter a value of Second Number:");
//     scanf("%d",&num2);
//     printf("Enter a value of Third Number:");
//     scanf("%d",&num3);

//     if(num1<num2){
        
//         if(num1<num3)
//         min=num1;
//         else
//         min=num3;
//     }
           
        
//    else{
//         if(num2<num3)
//         min=num2;
//         else
//         min=num3;


//     }
//     printf("The Minimum Number is :%d\n",min);
    
    
// }





// #include<stdio.h>                                  2.
// int main(){
//     int num1,num2,num3,num4,max;
//     printf("Enter a value of First Number:");
//     scanf("%d",&num1);
//     printf("Enter a value of Second Number:");
//     scanf("%d",&num2);
//     printf("Enter a value of Third Number:");
//     scanf("%d",&num3);
//     printf("Enter a value of Fourth Number:");
//     scanf("%d",&num4);
//     if(num1>num2){
//         if(num1>num3){
//             if (num1>num4)
//             max=num1;
//          else
//          max=num4;     }
        
//         else{
//         if(num3>num4)
//        max=num3;
//         else
//       max=num4;      }

// }    else{
//     if(num2 > num3) {
//             if (num2 > num4)
//                 max = num2;
//             else
//                 max = num4;
//         } else {
//             if (num3 > num4)
//                 max = num3;
//             else
//                 max = num4;
//         }
//     }

//     printf("The maximum number is: %d\n", max);

// }





// Lab Work #5.3............



// #include<stdio.h>                          1.
// int main(){
//     int num1,num2,num3,min;
//     printf("Enter the first number:");
//     scanf("%d",&num1);

//     printf("Enter the second number:");
//     scanf("%d",&num2);
    
//     printf("Enter the third number:");
//     scanf("%d",&num3);

//     min = (num1<num2)? ((num1<num3)? num1:num3): ((num2<num3)? num2:num3);
//     printf("The minimum number is:%d\n",min);
    

// }



// #include <stdio.h>                            2.

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

//             switch (RechargeChoice) {
//                 case 1:
//                     printf("You have successfully done an Internet Recharge.\n");
//                     break;
//                 case 2:
//                     printf("You have successfully done a Top-up Recharge.\n");
//                     break;
//                 case 3:
//                     printf("You have successfully done a Special Recharge.\n");
//                     break;
//                 default:
//                     printf("Invalid Option\n");
//             }
//             break; 

//         case 2:
//             printf("Internet Recharge ke liye 1 dabaiye\n");
//             printf("Top-up Recharge ke liye 2 dabaiye\n");
//             printf("Special Recharge ke liye 3 dabaiye\n");
//             printf("Apna vikalp chune: ");
//             scanf("%d", &RechargeChoice);  

//             switch (RechargeChoice) {
//                 case 1:
//                     printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
//                     break;
//                 case 2:
//                     printf("Aapne safaltapurvak Top-up Recharge kar liya hai.\n");
//                     break;
//                 case 3:
//                     printf("Aapne safaltapurvak Special Recharge kar liya hai.\n");
//                     break;
//                 default:
//                     printf("Kripya valid vikalp chune.\n");
//             }
//             break;

//         case 3:
//             printf("Internet Recharge mate 1 dabavo\n");
//             printf("Top-up Recharge mate 2 dabavo\n");
//             printf("Special Recharge mate 3 dabavo\n");
//             printf("Tamaro vikalp chuno: ");
//             scanf("%d", &RechargeChoice);  

//             switch (RechargeChoice) {
//                 case 1:
//                     printf("Tame safaltapurvak Internet Recharge kari lidhu che.\n");
//                     break;
//                 case 2:
//                     printf("Tame safaltapurvak Top-up Recharge kari lidhu che.\n");
//                     break;
//                 case 3:
//                     printf("Tame safaltapurvak Special Recharge kari lidhu che.\n");
//                     break;
//                 default:
//                     printf("Kripya valid vikalp chuno.\n");
//             }
//             break;

//         default:  
//             printf("Invalid Language Option.\n");
//     }
// }




// Lab Work #6.1......


// #include<stdio.h>                 1. for loop....
// int main(){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>                 1. while loop....
// int main(){
//  int i=0;
// while(i<=9){
//     i++;
//     printf("%d\n",i);              
// }  
// }

 
// #include<stdio.h>               2.for loop.....
// int main(){
//     for(int i=10;i>=1;i--){
//         printf("%d\n",i);
//     }
// }



// #include<stdio.h>                 2.while loop.....
// int main(){
//     int i=11;
//     while(i>=2){
//         i--;
//         printf("%d\n",i);
//     }

// }


 // 3. while loop.....

// #include<stdio.h>  
           

// int main() {
//     int n;
//     int i=1;

//     printf("Enter the value of N: ");
//    scanf("%d", &n);

//     while (i <= n) {
//         printf("%d\n", i);
//         i++;
//     }

// }


#include<stdio.h>
int main(){
    
}


