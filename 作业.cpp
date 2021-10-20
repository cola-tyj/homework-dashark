#include<stdio.h>
int main()
{
	float target=2.0f;
	float left=0.0f;
	float right=target;
	float mid=(left+right)/2;
	while((right-left)>0.00001)
	{
		if (mid*mid<target)
		left=mid;
		else
		right=mid;
		mid=(left+right)/2;
	}
	printf("%f\n",mid);
	return 0;
}
