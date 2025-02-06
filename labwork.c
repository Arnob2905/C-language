// Lab work #1.2


// #include<stdio.h>       1
// int main(){
//     printf("Arnob Maity");
//     printf("\n 18");
//     printf("\n SSGITS");
// }


// #include<stdio.h>       2
// int main(){
//     printf("*********\n");
//     printf("|\t|\n");
//     printf("R\t|\n");
//     printf("N\t|\n");
//     printf("W\t|\n");
//     printf("|\t|\n");
//     printf("*********\n");
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
//          printf("*   *\t*   *\n");
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