#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	b[0]='\0';
	scanf("%s",a);
	int n=strlen(a);
	int j=-1,i;
	for(i=0;i<n;i++)
	{
		if(a[i]=='('||a[i]=='[')
		{
			j++;
			b[j]=a[i];	
		}
		else
		{
			if((a[i]==')'&&b[j]=='(')||(a[i]==']'&&b[j]=='[')){
				b[j]='\0';
				j--;
			}
			else{
				printf("No");
				break;
			}
		}
	}
	if(i==n) printf("Yes");
	return 0;
}

