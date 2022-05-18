/* difference between getch() and getche()

run any one at a time and comment out another one to understand perfectly.

*/

#include<stdio.h>
#include<conio.h>

int main(){

    char ch;

    ch = getch();
    //printf("%c", ch);

    //ch = getche();


    /*
    getch is a C function to read a single character from the keyboard
    which does not display on screen and immediately returned
    without waiting for the enter key.
    */

    //getch();



    /*
    getche is a C function to read a single character from the keyboard
    which displays immediately on screen without waiting for the enter key.

    */
    // getche();
    return 0;
}
