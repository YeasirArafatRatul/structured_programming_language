#include<stdio.h>


int main(){

char c;
printf("Enter a character: \n");
scanf("%c",&c);

if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    printf("Its an alphabet");
}
else if(c >= '0' && c <= '9')
    {
    printf("Its a digit");
}
else{
    printf("Invalid Input");
}
return 0;
}
