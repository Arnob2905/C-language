// #include<stdio.h>             for loop....  post  increment......
// int main(){
//     for(int i=1;i<=100;i++){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>           for loop....  post increment......
// int main(){
//     for(int i=1;i<=1000;i++){
//         printf("%d\n",i);
//     }
// }

// #include<stdio.h>       for loop.....      post decrement......
// int main(){
//     for(int i=100;i>=1;i--){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>             for loop....    post decrement......
// int main(){
//     for(int i=1000;i>=1;i--){
//         printf("%d\n",i);
//     }
// }


// #include<stdio.h>           while loop.... post increment....
// int main(){
//     int num=1;
//     while(num<=100){
//         printf("%d\n",num);
//         num++;
//     }
// }

// #include<stdio.h>        while loop.... post increment....
// int main(){
//     int num=1;
//     while(num<=1000){
//         printf("%d\n",num);
//         num++;
//     }
// }
 

//  #include<stdio.h>        while loop .... post decrement.....
//  int main(){
//     int num=100;
//     while(num>=1){
//         printf("%d\n",num);
//         num--;
//     }
//  }


// #include<stdio.h>               while loop..... post decrement.....
// int main(){
//     int num=1000;
//     while(num>=1){
//         printf("%d\n",num);
//         num--;
//     }
// }

// #include<stdio.h>               while loop.... post increment......
// int main(){
//     int num=1;
//     while(num<=10000){
//         printf("%d\n",num);
//         num++;
//     }

// }



// #include<stdio.h>         do while ..... post increment....
// int main(){
//     int num=1;
//     do{
//         printf("%d\n",num);
//         num++;
//     }while(num <=10);

//     }



// #include<stdio.h>          do while ..... post increment....
// int main(){
//     int num=1;
//     do{
//         printf("%d\n",num);
//         num++;
    
//     }
//     while(num <=100);
// }



// #include<stdio.h>                           1 looping with  pattern .........
// int main(){
//          for(int row=1;row<=4;row++){

         
//          for(int col=1;col<=4;col++){
    
//         printf("* ");}
//         printf("\n");}
// }



 #include<stdio.h>                              //2  looping with  pattern .........
int main(){
    for(int row=1;row<=4;row++){
    for(int col=1;col<=row;col++){
        printf("  * ");}
        printf("\n");
    }
}