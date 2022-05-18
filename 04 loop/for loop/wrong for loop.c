/*
#include<stdio.h>


int main(){

    int i;
    for(i = 0; i <= 5; i++);
    {
        printf("%d", i);
    }
    return 0;
}


#include<stdio.h>
main()
{
   int const a = 5;
   a++;
   printf(“%d”, a);
}

*/
#include<stdio.h>
main()
{
   int i = 1;
   while( i++ <= 5 )
      printf("%d ", i++);
}
