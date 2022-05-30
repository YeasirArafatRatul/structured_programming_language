#include<stdio.h>
#include<stdlib.h>

int main(int argcounter, char *argvariables[])
{

    printf("Program Name Is: %s",argvariables[0]);

    if(argcounter==1)
        printf("\n No Extra Command Line Argument Passed Other Than Program Name");

    if(argcounter>=2)
    {
        printf("\n Number Of Arguments Passed: %d",argcounter);
        printf("\n ----Following Are The Command Line Arguments Passed----");
        printf("\n argvariables[0]: %s", argvariables[0]);

        for(int i =1; i<argcounter; i++)
            printf("\n argvariables[%d]: %d",i, atoi(argvariables[i]));
    }
    return 0;
}
