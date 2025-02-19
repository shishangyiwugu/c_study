#include <stdio.h>
int main (void)
{
	int max,i,j,k,N,n;
	int a[30];//存放导弹高度
	int count[30];//存放当前导弹所结尾的最长递减子串
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d",&n);
		//初始化两个数组
		for(i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			count[i]=1;
		}
		//求每一个导弹所结尾的最长递减字串
		for(i=0;i<n;++i)
			for(j=0;j<i;++j)
				if(a[j]>a[i]&&count[i]<count[j]+1)
					count[i]=count[j]+1;
		//找到所有最长字串中最长的一个
		max=0;
		for(i=0;i<n;++i)
			if(count[max]<count[i])
				max=i;
		printf("%d\n",count[max]);
	}
	return 0;
}