#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i]) a[i]++;
			for(int m=0;m<j;m++)
				if(a[m]==a[i]) a[i]++;
		}
		printf("%d ",a[i]);
	}
	return 0;
}