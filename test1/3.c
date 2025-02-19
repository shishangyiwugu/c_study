#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int sum=a[0],max=0;
	for(i=1;i<n;i++)
	{
	
		if(sum+a[i]>a[i]) sum += a[i];
		else sum = a[i];
		max = fmax(max,sum);
	}
	printf("%d",max);
	return 0;
}

