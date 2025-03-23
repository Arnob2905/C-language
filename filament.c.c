// #include<stdio.h>                                   1.
// int main(){
//     char str[100],reversed[100];
//     int i,length=0,cnt=1;
    
//     printf("Enter any string:");
//     scanf("%s",str);
    
//     while(str[length]!= '\0'){
//         length++;
        
//     }
//     for(i=0;i<length;i++){
//         reversed[i]=str[length-i-1];
//     }
//     reversed[length]='\0';
//     for(i=0;i<length;i++){
//         if(str[i] != reversed[i]){
//             cnt=0;
//             break;
//         }
//     }
//     if(cnt){
//         printf("It is a Palindrome.\n");
//     }
//         else{
//             printf("It is not a Palindrome.\n");
//         }
//     }
    
    
    
    
// #include<stdio.h>                                2.
// int main(){
//     char str[100];
//     int freq[256]={0},i;
    
//     printf("Enter any String:");
//     scanf("%s",str);
    
//     for(i=0;str[i]!='\0';i++){
//         freq[(int)str[i]]++;
//     }
//     printf("Character frequencies:\n");
//     for( i=0;i<256;i++){
//         if(freq[i]>0){
//             printf("%c:%d\n",i,freq[i]);
//         }
//     }
// }




