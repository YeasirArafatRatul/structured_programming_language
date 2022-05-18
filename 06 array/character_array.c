/*
Character Arrays: Strings
How to store strings.
Size of array >= no. of characters in string + 1.
Because we need to pass a NULL character to indicate the end of the string.
Null character is denoted by '\0'. String in C has to terminated by a null character.

*/

#include<stdio.h>


int main(){
    char name[] = 'RATUL'; // this way we do not need to give '\0' null character. It is implicit.
    char name[] = {'R','A','T', 'U', 'L', '\0'}; // null character must be given.
    char name[6]; // decrease 1.

    name[0] = 'R';
    name[1] = 'A';
    name[2] = 'T';
    name[3] = 'U';
    name[4] = 'L';
    name[5] = '\0';
    printf("%s", name);
}
