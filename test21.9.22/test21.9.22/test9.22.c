#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//
//	//��ȥ�����ַ�
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("%s\n", password);
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//�ݹ�
//int count = 0;
//
//int Fib1(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//�ǵݹ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//
//	return 0;
//}


