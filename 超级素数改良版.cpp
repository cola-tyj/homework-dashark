//������������������λ���ֵĺͣ���λ���ֵ�ƽ���ͣ�����������    ������δ��� 
//�� 100~10000 �ڵ����г��������������ǵ�ƽ������
#include<stdio.h>
int isprim(int k){		//�жϱ����ǲ������� 
	int m;
	for(m=2; m<=(k/2); m++){
		if(k % m == 0){		//�������� 
			return 1; 
		}     
	}
	return 0;
}
int isprim2(int k2){		//�жϸ�λ���ֵĺ��ǲ������� 
	int m2,second,a,b,c,d;
	int ret2;
	a= k2/1000;
	b=(k2-a*1000)/100;
	c=(k2-a*1000-b*100)/10;
	d=(k2-a*1000-b*100-c*10)%10;
	second=a+b+c+d;
	if(1 == isprim(second)) {		// �������� 
		return 1;
	}
	return 0; 
}

int isPrim3(int k2){		//�жϸ�λ���ֵ�ƽ�����ǲ������� 
	int m2,second,a,b,c,d;
	int ret2;
	a= k2/1000;
	b=(k2-a*1000)/100;
	c=(k2-a*1000-b*100)/10;
	d=(k2-a*1000-b*100-c*10)%10;
	second=a*a + b * b + c * c + d * d;
	if(1 == isprim(second)) {		// �������� 
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
