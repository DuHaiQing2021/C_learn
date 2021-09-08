#define _CRT_SECURE_NO_WARNINGS 1

int extern_1 = 200;//全局变量
static int extern_2 = 300;//静态全局变量
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
static int add_1(int n, int m)
{
	int z;
	z = n + m;
	return z;
}