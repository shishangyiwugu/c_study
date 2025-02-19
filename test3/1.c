#include<stdio.h>

int main()
{
	long long a[10],b[10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=(a[i]%(long long)1e12)/1e4;
	}
	for(int i=0;i<n;i++)
	{
		int max=i;
		for(int j=i+1;j<n;j++)
		{
			if(b[max]<b[j]) 
				max=j;
			if(b[max]==b[j])
				max=a[max]>a[j]? max:j;
		}
		long long c;
		c=a[max];a[max]=a[i];a[i]=c;
		c=b[max];b[max]=b[i];b[i]=c;
	}
	printf("\n");
	for(int i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
}

