#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
	int num[n];
	printf("Run time initialization Example: \n");
	printf("Enter array elements: ");
	for(int i=0; i<n;i++)
	{
	scanf("%d", &num[i]);
	}
	printf("Accessing array elements after dynamic initialization");
	for(int i=0; i<n;i++)
	{
	printf("%d ", num[i]);
	}
	return 0;
}
