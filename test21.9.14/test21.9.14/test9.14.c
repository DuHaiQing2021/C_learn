#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<assert.h>
///*****
//strcpy���ַ������ƣ�
//��strcat���ַ������ӣ�
//�ַ�����������
//*****/
//my_strcat(char* dest,const char* src)//const ��������ϣ���ַ�����Ҫ�䣬�𵽱������á�
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.
//	while (*dest!='\0')//
//	{
//		dest++;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return *ret;
//}
//
//int main()
//{
//	char arr_1[10] = "aadddf";
//	char arr_2[20] = "sssd";
//
//	//�˺����ķ���ֵΪ�������һ�� �ַ� ����
//	//strcat(arr_2, arr_1);//�˺�����arr_1����ַ���׷�ӵ�arr_2�ַ������档
//	my_strcat(arr_2, arr_1);
//
//	printf("%s\n", arr_2);
//
//	return 0;
//
//}

//strcmp�Ƚϵ����ַ��������ݣ����ǳ��ȡ�
//my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1==*s2)
//	{
//		
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char arr1[] = "aaddeaaa";
//	char arr2[] = "addaff";
//	int cmp1;
//	int cmp2;
//	cmp1=strcmp(arr1, arr2);//�Ƚ��ַ�������ַ��İ�˹����Ĵ�С��
//	printf("%d\n", cmp1);// arr1<arr2 ���� - 1����<0��arr1>arr2����1����>0��arr1 == arr2����0.
//
//	cmp2=my_strcmp(arr1, arr2);
//	printf("%d\n", cmp2);
//	return 0;
//}


///*****
//strncpy
//*****/
//
//int main()
//{
//	char arr1[20]="abdaada";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}
// 
// 
//rtok(, "@.");
//zpw\0bitedu.tech

//int main()
//{
//	char arr1[] = "zpw@bitedu.tech";
//
//	char arr2[100] = { 0 };//��ʱ����
//	//zpw\0bitedu.tech\0
//
//	char sep[] = "@.";
//	strcpy(arr2, arr1);
//	char* ret = NULL;
//	//�ָ��ַ���
//
//	for (ret=strtok(arr2, sep); ret!=NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	rtok(arr2, sep);
//	rtok(NULL, sep);
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int i=0;
//	//�����ڴ�
//	memcpy(arr2, arr1, 10 * sizeof(int));
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//	return 0;
//}