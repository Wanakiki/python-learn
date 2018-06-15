#include<stdio.h>
int main(){
   int b[10]={1,2,3,4,5,6,7,8,9,10};int n,c;
   printf("请输入要查找的数：\n");
   scanf("%d",&n);
   if (char f(b,c)==c)  printf("该数是第%d个数\n",c);
   if (char f(b,c)==0)  printf("该数不存在"); 
}
	int f(a[],int c)
    {   int b=0,d=10;
	    while (b<=d){
		c=(b+d)/2;
        if (a[c]=n)  return c;
		  else if(a[c]>n)   d=c-1;   
		  	else b=c+1;}
		if(b>d) return 0;
	}	
  
