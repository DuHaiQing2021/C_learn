#include<stdio.h>
/****
函数栈帧
ebp，esp这两个寄存器中存放的是地址、
这两个地址是用来维护函数栈帧的。

每个函数调用，都要创建一个空间
 
****/

int main()
{
	int a = 20;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d", c);

	return 0;
}