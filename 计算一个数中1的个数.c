//有一个整数n,写一个函数f(n),返回0到n之间出现的 "1 "的个数。比如f(13)=6,现在f(1)=1,问下一个最大的f(n)=n的n是什么？ 
//思路：分别计算十位、个位、百位等等个位数为1的个数，然后相加
#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,j,k,f,m,s=0;
	i=0;
	m=1;
	printf("Please input a number:");
	scanf("%d",&n);
	k=n;
	f=n;
	while(k!=0)
	{
		k/=10;
		i++;
	}
	if(f<=9&&f>=1)
	{
		s=1;
	}
	else
	{
		for(j=0;j<=i;j++)
	{
		if((n/m)%10==0)
		{
			s=s+(n/(m*10))*m;
		}
		else if((n/m)%10==1)
		{
			s=s+(n/(m*10))*m+n%m+1;
		}else if((n/m)%10>1)
		{
			s=s+((n/(m*10))+1)*m;
		}
		m*=10;	
	}	
	}
	printf("The result is:%d\n",s);
	return 0;
}