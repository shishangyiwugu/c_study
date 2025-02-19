#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gouMai(int n,int g,int p)
{
	if(n>=2) 
		return 1+gouMai(n-2,g+1,p+1);
	if(g>=2)
		return 1+gouMai(n,g-2+1,p+1);
	if(p>=3)
		return 1+gouMai(n,g+1,p-3+1);
	return 0;
}
int main()
{
	printf( "%d",gouMai(20,0,0));
}
