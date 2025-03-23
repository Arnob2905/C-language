/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    float score;
    printf("Enter your Score(0-100):");
    scanf("%f",&score);
    
    if(score>=90){
        printf("Your grade is A.\n");
        
    }
    else if(score>=80){
        printf("Your grade is B.\n");
    }
    else if(score>=70){
        printf("Your grade is C.\n");
    }
    else if(score>=60){
        printf("Your grade is D.\n");
    }
    else if(score>=50){
        printf("Your grade is E.\n");
    }
    else{
    printf("Your grade is F.\n");
    }
    
    
    if(score>=90){
        printf("Excellent work!\n");
    }
    else if(score>=80){
        printf("Well done!\n");
    }
    else if(score>=70){
        printf("Good job!\n");
    }
    else if(score>=60){
        printf("You passed,but you could do better!\n");
    }
    else if(score>=50){
        printf("Work hard!\n");
    }
    else{
        printf("Sorry,you failed!\n");
    }
    
    if (score>=90 ||score>=80 ||score>=70 ||score>=60 ||score>50){
        printf("You are eligible for the next level.");
    }
    else{
        printf("Please try again next time.");
    }
    
    return 0;
    
    
    
}
