#define _CRT_SECURE_NO_WARNINGS 1
#include<Stdio.h>
/*位段可以节省空间*/
//struct s1
//{
//	int _a : 2; //_a 2个bit位
//	int _b : 5; //_b 5个bit位
//	int _c : 5;//_c 5.。。
//	int _d : 10;//。。
//};
////4字节byte=32bit（2+5+5+10=22bit）struct s1
//struct s2
//{
//	char _a : 2; //_a 2个bit位
//	char _b : 5; //_b 5个bit位
//	char _c : 7;//_c 7.。
//	char _d : 5;//。。
//}s;
//int main()
//{
//	s._a = 10;       // 000010 10（只能存2个bit位）
//	s._b = 20;       // 000 01100（只能存5个bit位）
//	s._c = 10;       // 0 0001010（只能存7个bit位）
//	s._d = 5;        // 000 00101（只能存5个bit位）
//	//00000010 00001100 00001010 00000101
//	//    2        20      10         5
//
//	printf("%d %d %d %d\n", s._a, s._b, s._c, s._d);
//	printf("%d\n", sizeof(struct s1));//4个字节
//	printf("%d\n", sizeof(struct s2));//3个字节
//
//
//	return 0;
//}


//枚举
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
//		printf("红色\n");
//	}
//	return 0;
//}

//union myunion_1
//{
//	char a[7]; //7个字节  对齐1
//	int i; //4
//}u1;
//union myunion_2
//
//{
//	short a[7]; // 16字节   对齐是8
//	int i;   //    
//}u2;
//
//int main()
//{
//	printf("%d\n", sizeof(u1));
//	printf("%d\n", sizeof(u2));
//	return 0;
//}


