#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int check_sys()
//{
//	int a = 1;
//	return *((char*)&a);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//10000001  ԭ��
//	//11111110  ����
//	//11111111  ���� ���洢��
//	//10000001  ԭ�� ����ӡ��
//	signed char b = -1;
//	//10000001
//	//11111110
//	//11111111  
//	//10000001
//	//ͬ��
//	unsigned char c = -1;
//	//10000001
//	//11111110
//	//11111111 ���� �洢����ӡ
//	//��Ϊ�޷�������ԭ������ͬ���Դ洢�Ĳ���������
//	printf("a=%d\tb=%d\tc=%d\t\n", a, b, c);
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	// 10000000
//	//%u���޷��ŵ���ʽ��ӡ����
//	//��������������Ϊǰ���Ǹ����в�һ�������㣩
//	//11111111111111111111111110000000
//	//��Ϊ���޷��Ŵ�ӡ��ԭ������ͬ���д�ӡ42��+
//	printf("%u", a);
//
//	return 0;
//}


//#include<Stdio.h>
//int main()
//{
//	char a=128;
//	//00000000000000000000000010000000
//	//10000000-- -a
//	//������������Ϊǰ���Ǹ����в�һ�������㣩
//	//11111111111111111111111110000000
//	//��Ϊ���޷��Ŵ�ӡ��ԭ������ͬ���д�ӡ42��+
//	printf("%u", a);
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//
//	printf("%d\n", i + j);//��ӡ-10
//
//	return 0;
//}

//int main()
//{
//	unsigned int n = -10;
//	int m = -10;
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110 ����
//	//��Ϊn�ı������޷����������Դ���ǣ�
//	//11111111111111111111111111110110 ����
//	// �����з��Ŵ�ӡ����Ҫ�Ѳ�����ԭ��
//	
//	//10000000000000000000000000001010 ԭ��
//	printf("%d\n", n);
//	printf("%d\n", m);
//	//��Ϊn�ı������޷����������Դ���ǣ�
//	//11111111111111111111111111110110 ����
//	//�����޷��Ŵ�ӡ��ԭ������ͬ��
//	//11111111111111111111111111110110 ԭ��
//	printf("%u\n", n);
//	printf("%u\n", m);
//	return 0;
//}


//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//����ѭ��
//		Sleep(1000);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];//-128- -127
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
