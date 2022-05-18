#include<stdlib.h>
#include<stdio.h>

int random()
{
    int result;

    result = rand()%5;
    return result;
}

int main(){

    char dictionary[10][20] = {"Hello","World","Programming","Bangladesh","Dhaka","Python"};

    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", dictionary[random()]);
    }

    return 0;


}
