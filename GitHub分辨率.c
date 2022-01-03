#include<stdio.h>
#include<math.h>
int main(){
    char ress[14][10];
    int result[14];
    int m,n;
    int x,y;
    printf("请输入分辨率：\n");
    for(int i=0;i<14;i++){
        scanf("%s",ress[i]);
    }
    printf("请输入数据：\n");
    scanf("%d %d",&x,&y);
    for(int i=0;i<14;i++){
        sscanf(ress[i],"%d*%d",&m,&n);
//        printf("%d %d\n",m,n);
        int min1 = fabs(m-x)+fabs(n-y);
        int min2 = fabs(m-y)+fabs(n-x);
        if(min1 < min2)
        result[i] = min1;
        else
        result[i] = min2;
    }
    int min = result[0];
    int flag = 0;
    for(int i=0;i<14;i++){
        if(result[i] < min){
        min = result[i];
        flag = i;
        }
    }
    printf("所选的分辨率是：\n");
    printf("%s\n",ress[flag]);
    return 0;
}










/*
//指向指针的指针 
#include<stdio.h>
#include<string.h>
void Exchange(char **str,int n);
int main(){
    int n;
    scanf("%d",&n);
    char *str[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%s",&str[i]);
    } 
    char **str2=str;
    Exchange(str2,n);
    for(i=0;i<n;i++){
        printf("%s",str[i]);
    }
    return 0;
}
void Exchange(char **str,int n)
{
    for(int j=0;j<n;j++){
    	for(int i=0;i<n-1;i++){
        	if(str[i]<str[i+1]){
        	char ch[100];
       		strcpy(ch,str[i]);
        	strcpy(str[i],str[i+1]);
        	strcpy(str[i+1],ch);
        	}
    	}
    }
}
*/