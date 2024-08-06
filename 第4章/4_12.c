#include <stdio.h>
/*
	世界最高山峰是珠穆朗玛峰（8844.43米),
	假如我有一张足够大的纸，它的厚度是0.1毫米。
	请问，我折叠多少次，可以折成穆朗玛峰的高度
	
	思路：
		利用循环折叠纸张，当纸张的厚度超过珠穆朗玛峰的高度，循环就结束了
		循环结束的条件： 纸张的厚度>珠穆朗玛峰的高度 
*/

int main()
{
	//1.定义变量记录珠穆朗玛峰的高度和纸张的厚度 
	double n = 0.0001;
	double m = 8844.43;
	int count = 0;
	//2.利用循环折叠纸张
	//小括号里面的内容：什么情况下，循环可以继续执行，跟上面的结束条件是反过来的 
	while(n < m)
	{
		//折叠纸张 
		n = n * 2;
		count++;
	}		
	//3.打印 
	printf("%d",count);
	return 0;
}
