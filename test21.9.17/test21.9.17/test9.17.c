#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>
/*λ�ο��Խ�ʡ�ռ�*/
//struct s1
//{
//	int _a : 2; //_a 2��bitλ
//	int _b : 5; //_b 5��bitλ
//	int _c : 5;//_c 5.����
//	int _d : 10;//����
//};
////4�ֽ�byte=32bit��2+5+5+10=22bit��struct s1
//struct s2
//{
//	char _a : 2; //_a 2��bitλ
//	char _b : 5; //_b 5��bitλ
//	char _c : 7;//_c 7.��
//	char _d : 5;//����
//}s;
//int main()
//{
//	s._a = 10;       // 000010 10��ֻ�ܴ�2��bitλ��
//	s._b = 20;       // 000 01100��ֻ�ܴ�5��bitλ��
//	s._c = 10;       // 0 0001010��ֻ�ܴ�7��bitλ��
//	s._d = 5;        // 000 00101��ֻ�ܴ�5��bitλ��
//	//00000010 00001100 00001010 00000101
//	//    2        20      10         5
//
//	printf("%d %d %d %d\n", s._a, s._b, s._c, s._d);
//	printf("%d\n", sizeof(struct s1));//4���ֽ�
//	printf("%d\n", sizeof(struct s2));//3���ֽ�
//
//
//	return 0;
//}


//ö��
//enum color
//{
//	green=1,
//	red=3,
//	blue   //4
//}c;
//int main()
//{
//	c = red;
//	if (c==3)
//	{
//		printf("��ɫ\n");
//	}
//	return 0;
//}

//union myunion_1
//{
//	char a[7]; //7���ֽ�  ����1
//	int i; //4
//}u1;
//union myunion_2
//
//{
//	short a[7]; // 16�ֽ�   ������8
//	int i;   //    
//}u2;
//
//int main()
//{
//	printf("%d\n", sizeof(u1));
//	printf("%d\n", sizeof(u2));
//	return 0;
//}


