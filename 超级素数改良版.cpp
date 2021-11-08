//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。    此题尚未完成 
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int isprim(int k){		//判断本身是不是素数 
	int m;
	for(m=2; m<=(k/2); m++){
		if(k % m == 0){		//不是素数 
			return 1; 
		}     
	}
	return 0;
}
int isprim2(int k2){		//判断各位数字的和是不是素数 
	int m2,second,a,b,c,d;
	int ret2;
	a= k2/1000;
	b=(k2-a*1000)/100;
	c=(k2-a*1000-b*100)/10;
	d=(k2-a*1000-b*100-c*10)%10;
	second=a+b+c+d;
	if(1 == isprim(second)) {		// 不是素数 
		return 1;
	}
	return 0; 
}

int isPrim3(int k2){		//判断各位数字的平方和是不是素数 
	int m2,second,a,b,c,d;
	int ret2;
	a= k2/1000;
	b=(k2-a*1000)/100;
	c=(k2-a*1000-b*100)/10;
	d=(k2-a*1000-b*100-c*10)%10;
	second=a*a + b * b + c * c + d * d;
	if(1 == isprim(second)) {		// 不是素数 
		return 1;
	}
	return 0; 
	
}
int main(){
	int n,k1,k2;
	int sum = 0;
	int count = 0;
	for(n=100;n<10000;n++){
		if(isprim(n) == 0 && isprim2(n) == 0 && isPrim3(n) == 0){
			sum += n;
			count ++ ;
			printf("%d ", n);
		}            
	}
	printf("\n");
	printf("%d\n",sum/count);
	return 0;
}
