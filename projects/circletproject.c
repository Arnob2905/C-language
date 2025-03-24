//1.



// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=41;i<=45;i++){
//         for(j=41;j<=i;j++)
//          printf("%d ",j);
//          printf("\n");
// }
        
//     }



//2.


// #include<stdio.h>
// int main(){
//     int i,j,num=11;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++)
//         printf("%d ",num++);
//         printf("\n");
//     }
// }



//3.

// #include <stdio.h>

// int main() {
//     int i, j;
//     for (i = 5; i >= 1; i--) {
//         for (j = i; j <= 5; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//    
// }
   
   
   
   
//4.


// #include <stdio.h>

// int main() {
//     int i, j;
//     for (i = 5; i >= 1; i--) {
//         for (j = 1; j <= i; j++) {
//             if ((j % 2) == 0) 
//                 printf("0 ");
//             else 
//                 printf("1 ");
//         }
//         printf("\n");
//     }
  
// }


//5.


// #include <stdio.h>

// int main() {
//     int i, j, k, n = 5;
    
//     for (i = n; i >= 1; i--) {
//     for (j = i; j < n; j++)
//     printf("  ");  
        
//     for (k = i; k <= n; k++)
//     printf("%d ", k); 

//     for (k = n - 1; k >= i; k--)
//     printf("%d ", k); 
        
//     printf("\n");
//     }

   
// }


//6.


// #include <stdio.h>

// int main() {
//     int i, j, n = 5;
    
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) 
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


//7.


// #include <stdio.h>

// int main() {
//     int i, j;
//     int pattern[6] = {5, 2, 5, 1, 1, 1}; 
    
//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < pattern[i]; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
   
// }
   