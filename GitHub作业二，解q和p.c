
//找出n个解
#include<stdio.h>
#include<math.h>

int is_prime(int x) 
{
    int flag = 1;
    for(int i=2;i<sqrt(x);i++){
        if(x%i==0&&x!=2)
        flag=0; 
    }
    return flag;
}
int main(){
    int q=0,p=0;
    int tempt=0;
    int N=10000;
    int n;
    scanf("%d",&n);
    while(n--){
    int count=n;
    for(q;q<N;q++){
        for(p;p<N;p++){
            int x = pow(q,p);
            int y = pow(p,q);
            if(is_prime(q)&&is_prime(q)&&is_prime(x+y)) {
            	tempt=1;
            	count--;
            	break;
			}
        }
        if(tempt)
        break;
    }
    printf("%d %d\n",p,q);
    p+=1;
    q+=1;
    if(count!=0)
    N*=10;
	}
    return 0;
}