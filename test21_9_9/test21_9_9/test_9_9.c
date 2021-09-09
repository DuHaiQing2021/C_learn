#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
    结构体是组合类型--自己创造的类型--自定义类型
*/
//struct Book
//{
//    char name[30];
//    float price;
//    char id[20];
//};
//void print(struct Book* pb) //存储的b1的起始地址
//{
//    printf("b1的书名：%s\n", (*pb).name);
//    printf("b1的id：%s\n", pb->id);
//    printf("-----------------------------*****************-----------------------------\n\n");
//}
//int main() 
//{
//    struct Book b1 = { "c语言程序设计",55.0f,"cd212Nm000" };
//    struct Book b2 = { "数据结构",60,"DS21212000" };
//    struct Book b3 = { "python语言设计",66.5f,"SHJB0003666" };
//    printf("------------------------------指针来指向结构体----------------------------\n\n");
//    print(&b1);
//    
//    printf("书名：%s\t%s\t%s\n", b1.name,b2.name,b3.name);
//    printf("价格：%.1f\t\t%.1f\t\t%.1f\n", b1.price, b2.price, b3.price);
//    printf("数据结构的id：%s\n", b2.id);
//
//    return 0;
//}





       /*******分支语句和循环语句********/
//#include<stdio.h>
//int main()
//{
//    int age;
//    scanf("%d", &age);
//    if (age >= 18 && age < 30)
//        printf("成年\n");
//    else if (age < 18 && age>0)
//        printf("未成年\n");
//    else printf("青年\n");
//
//    return 0;
//}
/*********if--else书写风格*************/
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");//else应该是与之前最近的if语句匹配而不是与if匹配。
//
//    return 0;
//}//输出haha（else与离它之前最近  if语句  匹配）


/****此代码风格不好****/
//int main()
//{
//    int x = 0;
//    int y = 1;
//    int condition = 0;
//    //代码1
//    if (condition) {
//        return x;
//    }
//    return y;
//}//return在一个函数中只能返回一次


//int main()
//{
//    int a = 1;
//    //if (a == 5)  //此代码容易出现把a=5的错误
//        //printf("hehe\n");
//    if (5 == a)    //此代码更让人注意此处容易范的错误
//        printf("hehe\n");
//}

/*判断一个数是否为奇数*/
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


