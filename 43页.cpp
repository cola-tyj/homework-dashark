/*#include<stdio.h>
int main(){
	int a[4][4];
	scanf("%d",&a);
	int i, sum1, sum2, sum3, sum4;
	for(i=0;i<4;i++;){
		sum1+=a[1][i];
		sum2+=a[2][i];
		sum3+=a[3][i];
		sum4+=a[4][i];
	}
	printf("%d %d %d %d ",sum1,sum2, sum3, sum4);
	return 0;
} 
*/
#include<stdio.h>
int main(){
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total;
		
	printf("Enter the first (single) digit: \n");
	scanf("1d", &d);
	printf("Enter first group pf five digits: \n");
	scanf("%1d %1d %1d %1d %1d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group og five digits: \n");
	scanf("%1d %1d %1d %1d %1d",&j1, &j2, &j3, &j4, &j5);
	
	first_sum=d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total=3*first_sum + second_sum;
	
	printf("Check digit: %d\n ",9-((total-1)%10));
	
	return 0;
}
