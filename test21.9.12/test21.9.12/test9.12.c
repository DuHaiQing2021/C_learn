#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*****�۰����******/
//void found(int* arr, int k,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)       //1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("�ҵ���,�±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	found(arr, k, size);
//
//	return 0;
//}

/*
welcome to bit!!!!!
###################
w#################!
we###############!!
wel#############!!!
............
*/
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr_1[] = { "welcome to bit!!!!!" };
//	char arr_2[] = { "###################" };
//	int left = 0;
//	int right = strlen(arr_1) - 1;
//	printf("%s\n%s\n", arr_1, arr_2);
//	while (left <= right)
//	{
//		arr_2[left] = arr_1[left];
//		arr_2[right] = arr_1[right];
//		printf("%s\n", arr_2);
//		Sleep(1000);//ͣ1�롰Sleep�����Ҫ��д��ͷ��windows�Դ���ʱ��ֹͣ����
//		system("cls");//ִ��ϵͳ��������Ļ��
//        left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char password[] = "asa123456";
//	int i = 1;
//	printf("���������룺\n");
//	for (i = 1; i <= 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "asa123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else printf("�������\n");
//		if (3 == i)
//			printf("������������˳���¼��\n");
//	}
//	return 0;
//}

/******��������Ϸ****/
/*
1.�����������һ��1-100�����֣�
2.��Ҳ����֣�
      ����¶��ˣ�����ʾ�¶���
      ����´��ˣ�����ʾ�´���
      ����´��ˣ���ʾ���´��˻��߲�С��
3�����ظ���
*/

//#include<stdio.h>
//#include<stdlib.h>
//void meau() 
//{
//    printf("*******��������Ϸ*******\n");
//    printf("************************\n");
//    printf("*********1.into*********\n");
//    printf("*********0.exit*********\n");
//    printf("************************\n");
//}
//void game()
//{
//    int rd = rand();
//    printf("%d\n", rd);
//
//}
//
//int main()
//{ 
//    int input;
//    do 
//    {
//        meau();
//        printf("��ѡ��>>>");   
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("\n������Ϸ\n\n\n");
//            break;
//        case 0:
//            printf("\n�˳���Ϸ\n\n\n");
//            break;
//        default:
//            printf("\nѡ���������ѡ��\n\n\n");
//            break;
//        }
//        if (input == 1)
//        {
//            game();
//        }
//    } while (input);
//  
//
//    return 0;
//}