
#include<stdio.h> 
int main (){
	char s[15]; 
	int n,i;
     scanf("%d",&n);	
	printf("请输原字符串：\n");	//这里的回车被你当成字符输进去了
	for(i=0;i<n;i++)
	   scanf("%c",&s[i]);
	printf("a%s",s);
    for(i=0;i<n;i++){
      s[i]=s[n-1-i];
      printf("%s\n",s);
    }
	   printf("%s",s);	// 你这里 就输出了一个数 如果你是字符就用字符
	   //整数就用整数
}
