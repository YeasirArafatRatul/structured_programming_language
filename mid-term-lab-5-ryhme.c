#include<stdio.h>


int main(){

char c;
printf("Enter a character: \n");
scanf("%c",&c);

if(c >= 48 && c <= 57){
    printf("Its a digit");
}
else{
    printf("Its a character");
}
return 0;
}
