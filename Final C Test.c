// 1.vowel or consonant.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel.\n", ch);
        break;
        default:
        if((ch >='a'&&ch<='z')|| (ch>='A'&& ch<='Z')){
            printf("%c is a consonant.\n", ch);
        } else{
            printf("Invalid input.\n");
        }
       
    }
}



// 2. 1d array.

#include<stdio.h>
int main(){
  int arr[100],n,i,max;
  
  printf("Enter how many elements in the array:");
  scanf("%d", &n);
  
  printf("Enter %d numbers:\n",n);
  for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
      
  }
  max = arr[0];
  for(i=1;i<n;i++){
      if(arr[i]>max){
          max=arr[i];
      }
  }
   printf("Largest number is :%d\n", max);
}



// 3. square of element.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter how many elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; 

    printf("Squares of elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d squared is %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}



// 4. square of element.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter how many elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; 

    printf("Squares of elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d squared is %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}



// 5.structure with car.

#include <stdio.h>
struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int n, i;

    printf("Enter number of cars: ");
    scanf("%d", &n);

    struct Car cars[n]; 

  
    for(i = 0; i < n; i++) {
        printf("\nEnter details of car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    
    printf("\n--- Car Details ---\n");
    for(i = 0; i < n; i++) {
        printf("Car %d - Model: %s, Year: %d, Price: %.2f\n", i + 1, cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}



// 6.  students.


#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], course[50];
    int i;

    fp = fopen("data.txt", "w"); 
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    for(i = 0; i < 3; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter course of student %d: ", i + 1);
        scanf("%s", course);

        fprintf(fp, "Student %d - Name: %s, Course: %s\n", i + 1, name, course);
    }

    fclose(fp);

    printf("\nData written to data.txt successfully!\n");

    return 0;
}



// 7. pattern.

#include <stdio.h>
int main() {
    int i, j, num;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            if(i % 2 == 0 || i % 2 == 1) {
                num = i * i; 
                printf("%d ", num);
            } else {
                printf("0 ");
            }
        }
        printf("\n"); 
    }

    return 0;
}


