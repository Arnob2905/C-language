// Question 1 .
            //   Alphabet Skipper.

// #include <stdio.h>      a to z      do while loop....
//  int main(){
//      char ch='a';
//       do{
//           printf("%c ",ch);
//           ch+=1;
//       }
//       while(ch<='z');
//  }
 
 
//  #include<stdio.h>          a to z      for loop....
//  int main(){
//      for(char ch='a';ch<='z';ch++){
//          printf("%c ",ch);
//      }
//  }


// #include<stdio.h>               space         do while loop....
// int main(){
//     char ch='a';
//     do{
//         printf("%c, ",ch);
       
//         ch+=4;
//     }
//     while(ch<='z');
// }


// #include<stdio.h>                space        for loop.....
// int main(){
//     for(char ch='a';ch<='z';ch+=4){
//     printf("%c, ",ch);
//     }
// }




//Question 2.
             //   Digit Counter.
   
             
// #include<stdio.h>                          for loop....
// int main(){
//     int num,count=0;
//     printf("Enter the Number:");
//     scanf("%d",&num);
//     for(;num!=0;num/=10){
//         count++;
//     }
//     printf("Number of digits is: %d",count);
// }             



// #include<stdio.h>                        while loop.....
// int main(){
//     int num,count=0;
//     printf("Enter the Number:");
//     scanf("%d",&num);
//     if(num==0){
//         count = 1;
//     }
//     else{
//     while(num!=10){
//         num/=10;
//         count++;
//     }
// }
//     printf("Number of digits is: %d",count);
   

// }



//Question 3.
             //   Digit Addition.


// #include<stdio.h>                                 for loop.....
// int main(){
//    int num,first,last;
//     printf("Enter the Number:");
//     scanf("%d",&num);

//     last = num % 10;
//     for(first=num;first >= 10;first/=10);
//        int sum = first + last;
    
    
//     printf("Sum of first and last digits is:%d",sum);
// }       



#include<stdio.h>                                //  while loop.....
int main(){
    int num,first,last;
     printf("Enter the Number:");
      scanf("%d",&num);
      last = num % 10;

      while(num >= 10){
        num /= 10 ;
      }
      first = num;

      int sum = first + last ;
      printf("Sum of first and last digits is:%d",sum);
    
}