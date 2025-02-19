#include<stdio.h>
int main()
{
	int i,j,m,k=0;
	char a[100],b[50];
	for(i=0;i<100;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n') break;
	}
	for(;i<100;i++){
		a[i]='\0';
	}
	for(j=0;j<50;j++){
		scanf("%c",&b[j]);
		if(b[j]=='\n') break;
	}
	for(m=0;m<100;m++){
		if(a[m]=='\0'){
			a[m]=b[k];k++;
		}
		if(k==j) break;
	}
	printf("%s",a);		
	return 0;
}

