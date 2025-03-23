// #include<stdio.h>              1.Length Finder...
// int main(){
//     char str[100];
//     char *ptr;
//     int length= 0;
    
//     printf("Enter a string:");
//     gets(str);
    
//     ptr=str;
    
//     while(*ptr !='\0'){
//         length++;
//         ptr++;
//     }
//     printf("Length of the string =%d\n",length);
// }



#include <stdio.h>                   //2. Cubes Generator....

void findCubes(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int value = *(arr + i * cols + j);  
            int cube = value * value * value;
            printf("Cube of element [%d][%d] = %d\n", i, j, cube);
        }
    }
}

int main() {
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[10][10];  

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    findCubes(&arr[0][0], rows, cols);  

    return 0;
}
