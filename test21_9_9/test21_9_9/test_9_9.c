#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
    �ṹ�����������--�Լ����������--�Զ�������
*/
//struct Book
//{
//    char name[30];
//    float price;
//    char id[20];
//};
//void print(struct Book* pb) //�洢��b1����ʼ��ַ
//{
//    printf("b1��������%s\n", (*pb).name);
//    printf("b1��id��%s\n", pb->id);
//    printf("-----------------------------*****************-----------------------------\n\n");
//}
//int main() 
//{
//    struct Book b1 = { "c���Գ������",55.0f,"cd212Nm000" };
//    struct Book b2 = { "���ݽṹ",60,"DS21212000" };
//    struct Book b3 = { "python�������",66.5f,"SHJB0003666" };
//    printf("------------------------------ָ����ָ��ṹ��----------------------------\n\n");
//    print(&b1);
//    
//    printf("������%s\t%s\t%s\n", b1.name,b2.name,b3.name);
//    printf("�۸�%.1f\t\t%.1f\t\t%.1f\n", b1.price, b2.price, b3.price);
//    printf("���ݽṹ��id��%s\n", b2.id);
//
//    return 0;
//}





       /*******��֧����ѭ�����********/
//#include<stdio.h>
//int main()
//{
//    int age;
//    scanf("%d", &age);
//    if (age >= 18 && age < 30)
//        printf("����\n");
//    else if (age < 18 && age>0)
//        printf("δ����\n");
//    else printf("����\n");
//
//    return 0;
//}
/*********if--else��д���*************/
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");//elseӦ������֮ǰ�����if���ƥ���������ifƥ�䡣
//
//    return 0;
//}//���haha��else������֮ǰ���  if���  ƥ�䣩


/****�˴����񲻺�****/
//int main()
//{
//    int x = 0;
//    int y = 1;
//    int condition = 0;
//    //����1
//    if (condition) {
//        return x;
//    }
//    return y;
//}//return��һ��������ֻ�ܷ���һ��


//int main()
//{
//    int a = 1;
//    //if (a == 5)  //�˴������׳��ְ�a=5�Ĵ���
//        //printf("hehe\n");
//    if (5 == a)    //�˴��������ע��˴����׷��Ĵ���
//        printf("hehe\n");
//}

/*�ж�һ�����Ƿ�Ϊ����*/
//int main()
//{
//    int i = 0;
//    while (i <= 100)
//    {
//        if (i % 2 != 0)printf("%5d",i);
//        if (i % 10 == 0)printf("\n");
//        i++;
//    }
//    return 0;
//}


