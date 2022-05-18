#include<stdio.h>
int main()
{
int num,num1,lastdigit,sum=0;

printf("Enter a number to check :\n");
scanf("%d",&num);

num1 = num;

while(num!=0)
{
    lastdigit = num%10;
    sum += (lastdigit*lastdigit*lastdigit);
    num=num/10;
} 

if(num1==sum){
    printf("%d is an ARMSTRONG NUMBER\n",num1);
}
else{
   printf("The number is not an ARMSTRONG NUMBER");
}
return 0;
}
