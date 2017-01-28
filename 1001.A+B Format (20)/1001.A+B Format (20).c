#include<stdio.h>
int main()
{
	int a,b,i,j,k,l,sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum<1000&&sum>=0)
	{
		printf("%d",sum);
	}
	else if(sum>=1000)
	{
		i=sum/1000;
		j=sum-i*1000;
		if(i<1000&&i>=100)
		{
		printf("%03d,%03d",i,j);
		}
		else if(i>=10&&i<100)
		{
		printf("%02d,%03d",i,j);
		}
		else if(i>=1000)
		{
			k=i/1000;
			l=i-k*1000;
			printf("%d,%03d,%03d",k,l,j);
		}
		else
		{
		printf("%d,%03d",i,j);
		}
	}
	else if(sum<0)
	{
		if(sum>-1000)
	{
		printf("%d",sum);
	}
	else if(sum<=-1000)
	{
		i=sum/(-1000);
		j=sum*(-1)-i*(1000);
		if(i<1000&&i>=100)
		{
		printf("-%03d,%03d",i,j);
		}
		else if(i>=10&&i<100)
		{
		printf("-%02d,%03d",i,j);
		}
		else if(i>=1000)
		{
			k=i/1000;
			l=i-k*1000;
			printf("-%d,%03d,%03d",k,l,j);
		}
		else
		{
		printf("-%d,%03d",i,j);
		}
	}
	}
	return 0;
}
