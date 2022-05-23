#include <stdio.h>
int main() {
int a = 16;
   printf("Size of variable a : %d\n",sizeof(a));
   printf("Size of int data type : %d\n",sizeof(int));
   printf("Size of char data type : %d\n",sizeof(char));
   printf("Size of float data type : %d\n",sizeof(float));
   printf("Size of double data type : %d\n\n",sizeof(double));

   // SIZE OF AN EXPRESSION

   char c = 'S';
   double b = 4.65;
   printf("Size of variable a : %d\n",sizeof(c));
   printf("Size of an expression : %d\n",sizeof(c+b));


   int s = (int)(c+b);
   printf("Size of explicitly converted expression : %d\n",sizeof(s));


   printf("%d", (int)c);

   return 0;
}
