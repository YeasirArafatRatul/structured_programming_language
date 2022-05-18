#include<stdio.h>


int main(){

    // to put a single character single ' ' is used.
    char c = 'A';

    // to put multiple characters double " " is used and then it is called string.
    char s[] = "Programming Is Fun";


    // putting numbers as string
    char i = '8';

    char numbers[] = "1253";


    printf("%c \n",c);
    printf("%s \n",s);

    // puts() prints a new line automatically. Does not require a '\n'.
    puts(s);



    printf("%c \n",i);
    printf("%s \n",numbers);


    puts(numbers);

    // Can puts() show integers? Lets Check...

    /*
    int i = 3;
    puts(i);
    */
    // This two lines of code will show error and say: "expected 'char' but argument is of type 'int' "


    return 0;
}
