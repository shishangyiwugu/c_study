#include<stdio.h>
int main()
{
	int kl,p,g,n;
	scanf("%d",&n);
	kl=p=g=n/2;
	while(1)
	{
		while(p){
			p-=2;kl++;p++;g++;
		}
		while(g>=2){
			g-=3;kl++;p++;g++;
		}
		if(g==1){g=0;kl+=2;
		}
		if(g==0&&p==0)break;
	}
	printf("%d",kl);
	return 0;
}

