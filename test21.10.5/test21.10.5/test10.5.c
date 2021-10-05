#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    char arr[] = "AaEeIiOoUu";
//    char* p = arr;
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (getchar() == '\n')
//        {
//            ;
//        }
//        while (*p)
//        {
//            if (ch == *p)
//            {
//                printf("Vowel\n");
//                break;
//            }
//            p++;
//        }
//        if (*p == '\0')
//        {
//            printf("Consonant\n");
//        }
//        p = arr;
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    if (count == n * m)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    int arr1[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr1[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>  
//
//void reverse(char* str)
//{
//    unsigned int len = strlen(str);
//    char* left = str;
//    char* right = str + len - 1;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//
//
//}
//int main()
//{
//    char ch[100] = "0";
//    char* p = ch;
//    gets(ch);
//    reverse(ch);
//    printf("%s\n", ch);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j <(line - 1 - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <(line-1-i)*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int count = 0;
//	int empty = 0;
//	
//	scanf("%d", &money);
//	//¹ºÂò
//	count += money;
//	empty = money;
//	//»»
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}