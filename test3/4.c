#include<stdio.h>

int main()
{
	int n,a=1,b=2,c=0;
 	scanf("%d",&n);
 	for(int i=2;i<n;i++)
 	{
 		c=a+b;
 		a=b;
 		b=c;
	}
	if(n==1||n==2) c=n;
	printf("%d",c);
 	return 0;
}

