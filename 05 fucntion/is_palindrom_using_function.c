#include<stdio.h>
#include<stdbool.h>


bool isPalindrome(int n){
    long int r,rev=0,temp;
    temp = n;
    if(n >= 0){
        while(n>0)
            {
            r=n%10;
            rev=(rev*10)+r;
            n=n/10;
            }
        if(temp == rev)
            return true;

        return false;

    }
    else
        return false;

}

int main()

{
int n;
bool result;

scanf("%d",&n);

result = isPalindrome(n);
printf("%s", result?"true":"false");


return 0;
}
