#include<stdio.h>

struct number{
	int a;
	struct number *next;
}num[10],*head;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i].a);
	for(int i=0;i<n-1;i++)
		num[i].next=&num[i+1];
	head=&num[0];
	num[n].next=NULL;
	int l,r;
	scanf("%d %d",&l,&r);
	struct number *pre=&num[l-1];
	struct number *cur=&num[l];
	int m=r-l;
	while(m)
	{
		struct number *temp=cur->next;
		cur->next=pre;
		pre=cur;
		cur=temp;
		m--;
	}
	if(l==1) head=&num[r-1];
	else num[l-2].next=&num[r-1];
	num[l-1].next=&num[r];
	struct number *p=head;	
	do
	{
		printf("%d ",p->a);
		p=p->next;
	}while(p!=NULL);
	return 0;
}

