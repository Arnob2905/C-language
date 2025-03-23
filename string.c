// #include<stdio.h>
// #include<ctype.h>

// int main(){
//     char str[20];
//     char upstr[20];


//     printf("Enter a word: ");
//     scanf("%[^\n]",str);
//     for(int i=0;i<=20;i++){
//         upstr[i]=toupper(str[i]);
//     }
//     printf("%s",upstr);
// }



// #include<stdio.h>
// #include<ctype.h>


// int main(){
//     char str[20];
//     char upstr[20];
//     printf("Enter a word: ");
//     scanf("%[^\n]",str);
//     for(int i=0;i<=20;i++){
//         upstr[i]=tolower(str[i]);
//     }
//     printf("%s",upstr);
// }



// #include<stdio.h>
// #include<ctype.h>

// int main(){
//     char str[20];
//     char upstr[20];

//     printf("Enter a word:");
//     scanf("%[^\n]", str);

//     for(int i=0;i<20 && str[i] !='\0';i++)
//     {
//         if(isupper(str[i])){
//             upstr[i]=tolower(str[i]);
//         }
//         else if(islower(str[i]))
//         {
//             upstr[i]= toupper(str[i]);

//         }
//         else
//         {
//             upstr[i]=str[i];
//         }
    
//     }

//     printf("Modified word: %s\n",upstr);


// }








#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    printf("Create your password: ");
    scanf("%99s",&str);

    int cnt= strlen(str);
    int hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0;
    if(cnt >=6){
        for(int i=0;i<cnt;i++){
            if(isupper(str[i]))
            {
                hasUpper =1;

            }
            
        }
    }


}
