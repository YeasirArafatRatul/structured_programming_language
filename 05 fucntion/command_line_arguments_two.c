#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int counter;
    printf("Program Name Is: %s",argv[0]);

    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");

    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");

        printf("\n argv[0]: %s", argv[0]);

        for(counter=1; counter<argc;counter++)
            printf("\n argv[%d]: %d",counter, atoi(argv[counter]));
    }
    return 0;
}
