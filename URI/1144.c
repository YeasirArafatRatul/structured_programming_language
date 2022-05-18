#include<stdio.h>
int main(){
	int f,h,i,g,c=1,n,a[3];
	scanf("%d",&n);

	for(f=1;f<=n;f++){

        printf("%d %d %d\n",f, f*f, f*f*f);
		printf("%d %d %d\n",f, f*f+1, f*f*f+1);

	}
	return 0;
}
