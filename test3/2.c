#include<stdio.h>

int main()
{
 	int a,sum=0;
 	scanf("%d",&a);
 	for(int i=1;i<a;i++)
 		if(a%i==0) sum+=i;
	if(a==sum) printf("yes");
	else printf("no");
 	return 0;
}

