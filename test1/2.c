#include <stdio.h>
int main (void)
{
	int num;//记录每一天的不开心程度
	int max_date,max_day;//记录最不开心的程度和对应的日期
	int n,i;//计数变量
	int a,b;//暂存输入的两个数据
	scanf("%d",&n);//输入测试数据的组数
	while(n--) //循环每一组
	{
		for(i=0; i<7; ++i)//对每组进行输入和判断
		{
			//计算每一天的不开心程度
			scanf("%d %d" ,&a,&b);
			num = a+b;
			if( max_date<num )//如果本天的不开心程度大于之前最不开心的那一天同时保证 了输出天数靠前的那一天
			{
				max_date=num;//更新当前最不开心的程度
				max_day=i+1; //更新当前最不开心的天数
			}
		}
		printf("%d\n",max_day);
	}
	return 0;
}
