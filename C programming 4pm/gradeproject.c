// #include<stdio.h>
// int main(){
//     int marks;
    
//     printf("Enter your marks (0-100):");
//     scanf("%d",&marks);

//     if (marks >=90){
//       printf("Grade:A\n");
      
//     }

//     else if (marks >=80){
//         printf("Grade:B\n");

//     }
//     else if (marks >=70){
//         printf("Grade:C\n");
    
//     }
//     else if (marks >=60){
//         printf("Grade:D\n");
    
//     }
//     else if (marks >=50){
//         printf("Grade:E\n");
    
//     }
//     else if (marks >=40){
//         printf("Grade:F\n");
    
//     }

//     if (marks >=90){
//     printf("Excellent Work!\n");
//     }

//      else if (marks >=80){
//     printf("Well Done!\n");
//     }

//      else if (marks >=70){
//     printf("Good Job!\n");
//     }
//      else if (marks >=60){
//     printf("You passed,but could do better!\n");
//     }

//      else {
//     printf("Sorry, You Failed!\n");
//     }

//     if (marks>=90 || marks>=80 || marks>=70 || marks>=60){
//         printf("Congratulations,You are eligible for the next level.\n");
//     }
//     else{
//         printf("Please try again next time\n");
//     }
     

// }



// looper project......

// #include<stdio.h>             do while....  1
// int main(){
//     char ch = 'a';
//     do{
//         printf(" %c ",ch);
//         ch += 4;
    
//     }
//     while(ch <= 'z');
// }

// #include<stdio.h>               for loop.....   1
// int main(){
   
//     for( char ch = 'a';ch<='z';ch+=4){
//         printf(" %c ",ch);
//     }
// }


// #include<stdio.h>                                   2    for loop....
// int main(){
//     int num,count=0;
//     printf("Enter Number:");
//     scanf("%d",&num);
//     for(;num!=0;num/=10){
//         count++;
//     }
       
//         printf("%d",count);
    
// }

// #include<stdio.h>                   2   do while....
// int main(){
//     int num,count=0;
//     printf("Enter the Number:");
//     scanf("%d",&num);
//     do{
        
//         count++;
//         num/=10;
//     }
//     while(num!=0);
//     printf("%d",count);
// }



// #include<stdio.h>              3 while loop...
// int main(){
//     int num,count=0;
//     printf("Enter the Number:");
//     scanf("%d",&num);
//     while(num!=0){
//         num/=10;
//         count++;

//     }
//     printf("%d",count);
// }



#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    for(;num!=0;sum+=num%10){
    num/=10;
        
    }
    printf("%d",sum);
    
}




