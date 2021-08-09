#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//采用函数指针数组的方法
 void menu()
 
{
    printf("**************************\n");
    printf("**1.Add****** 2.Sub*******\n");
    printf("**3.Mul****** 4.Div*******\n");
    printf("********0.退出************\n");
    printf("**************************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mux(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int (*parr[5])(int, int) = { 0,Add,Sub,Mux,Div };

    do
    {
        menu();
        printf("请输入数字:>\n");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            printf("请输入操作数\n");
            scanf("%d %d", &x, &y);
            int ret = parr[input](x, y);
            printf("%d\n", ret);
        }
        else if (input==0)
        {
            printf("退出\n");
        }
        else
        {
            printf("选择错误\n");
        }
        
    } while (input);
    return 0;
}
//void menu()
//{
//    printf("**************************\n");
//    printf("**1.Add****** 2.Sub*******\n");
//    printf("**3.Mul****** 4.Div*******\n");
//    printf("********0.退出************\n");
//    printf("**************************\n");
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mux(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int input=0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("请输入数字:>");
//        scanf("%d", &input);
//        
//        switch (input)
//        {
//        case 1:
//            printf("请输入操作数\n");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Add(x, y));
//            break;
//        case 2:
//            printf("请输入操作数\n");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break; 
//        case 3:
//            printf("请输入操作数\n");
//            scanf("%d %d", &x, &y);
//              printf("%d\n", Mux(x, y));
//                break;
//        case 4:
//            printf("请输入操作数\n");
//            scanf("%d %d", &x, &y);
//              printf("%d\n", Div(x, y));
//                break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}