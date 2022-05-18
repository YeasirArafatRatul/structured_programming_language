#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr = (int*)malloc(4*sizeof(int));

    for(int i = 0; i < 4; i++){
        printf("Taking input in this memory location %d: ", ptr+i);
        scanf("%d", ptr+i);
    }

    ptr = (int*)realloc(ptr, 6*sizeof(int));
    ptr[4] = 60;
    ptr[5] = 80;

    printf("All values: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr+i));
    }

    return 0;
}
