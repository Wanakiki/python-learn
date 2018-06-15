#include<stdio.h>
int f(int  a[],int n);	//函数写在了主函数 main 的后面，要提前声明
//不进行声明 直接把函数写在主函数的前面也是可以的
int main(){
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	int n,c;
	printf("请输入要查找的数:");
	scanf("%d",&n);
	c=f(b,n);	
	//f(b,n)调用了那个函数 因为返回值是整形，所以这个式子等价于一个整形   
	//这里只是把 b n的值复制到函数里面 计算出了结果
	//只是复制内容 这点要注意
	if(c!=0)
		printf("该数是第%d个数",c);
	else
		printf("该数不存在");
	return 0;
}
int f(int a[],int n){
	//括号的内容是函数的传参，写的时候需要全部的信息 明确类型	
	//这里的a[] n 相当于临时的变量只是个名字，调用函数时会将函数的参数复制一份到该变量中
	//所以 写函数的时候要假装 a[] n 已经有值了
	int l=0,r=10;	//左右两个位置
	int temp=0;	
	while(l<=r){
		temp=(l+r)/2;
		if(a[temp]==n)	//函数内部的n就是函数的传参 和主函数没有关系
			return temp+1;	//因为是第几个数，返回值是下表加一
		else
			if(a[temp]>n)
				r=temp-1;
			else
				l=temp+1;
	}
	return 0;	//上面循环结束之后r一定小于l了，不存在 返回零
}

