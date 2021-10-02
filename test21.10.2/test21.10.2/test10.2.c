#define _CRT_SECURE_NO_WARNINGS 1

#include<Stdio.h>
//1
//my_strcpy(char* p1, char* p2)
//{
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//
//}

//2
//#include<assert.h>
//char* my_strcpy(char* ch_1,const char* ch_2)
//{
//	assert(ch_1 != NULL);//assert断言函数
//	assert(ch_2 != NULL);
//	char* ret = ch_1;
//	while (*ch_1++=*ch_2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char ch_1[30] = "sadsfsdds";
//	char ch_2[15] = "xcccfff";
//
//	char* ret = my_strcpy(ch_1, ch_2);
//	printf("%s\n", ret);
//	printf("%s\n", ch_1);
//	return 0;
//}
//#include<assert.h>
//int my_strlen(const char* src)
//{
//	int count = 0;
//	assert(src != NULL);
//	while (*src++)
//	{
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char ch_1[] = "sdsdfsdfa";
//	int len = 0;
//	len=my_strlen(ch_1);
//	printf("%d", len);
//	return 0;
//}

//#include<Stdio.h>
//int Bin(unsigned int num)
//{
//	
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);    
//		count++;                  
//					           
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	sum = Bin(num);
//	printf("二进制1的个数为%d个\n", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	int p = 0;
//	scanf("%d %d", &a, &b);
//	int temp = a ^ b;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	printf("偶数位：");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}    
//	printf("\n");
//	printf("奇数位：");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}







