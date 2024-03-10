//if语句的三种情况
//1.if(表达式)
//语句;
//2.if()
//语句1;
//else()
//语句2;
//3.if()
//语句1;
//else if()
//语句2;
//else()
//语句3;
//else遵循最近原则
//=====================多层if else 语句=================================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int age = 68;
//     if(age<18)
//     {
//     printf("yanger");
//     }
//     else//当if or else统领多条语句时要用大括号括起来XD
//     {
//     if(age>=18 && age<28)//在这里并且的意思是&&
//     printf("longer");
//     else if(age>=28 && age<50)
//     printf("very longer");
//     else if(age>=50 && age<90)
//     printf("very very longer");
//     }
// system("pause");
// return 0;
// }
//=是赋值，==才是等于
//============================while 语句输入1~100之间的基数================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i = 0;
//     while(i<=100)
//     {
//         if(i%2 == 1)
//         printf("%d ",i);
//         i++;
//     }
// system("pause");
// return 0;
// }
//==============if else语句================================================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i = 0;
//     printf("give me you number!\n");
//     scanf("%d",i);
//     if (i%2 == 1)
//     {
//         printf("it is a odd number\n");
//     }
//     else
//     {
//         printf("it is a even\n");
//     }
// system("pause");
// return 0;
// }
//==============for 语句===================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i = 0;
//     for (i = 1; i < 10; i++)
//     {
//         printf("%d ",i);
//     }
//     system("pause");
//     return 0;    
// }
//==========================while if求能被二整除但不能被三整除的数字================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i = 0;
//     while(i<=100)
//     {
//         if(i%2 == 0 && i%3 != 0)
//         printf("%d ",i);
//         i++;
//     }
// system("pause");
// return 0;
// }
//     printf("1*1=1\n");
//     printf("1*2=2 2*2=4\n");
//     printf("1*3=3 2*3=6 3*3=9\n");
//     printf("1*4=4 2*4=8 3*4=12 4*4=16\n");
//     printf("1*5=5 2*5=10 3*5=15 4*5=20 5*5=25\n");
//     printf("1*6=6 2*6=12 3*6=18 4*6=24 5*6=30 6*6=36\n");
//     printf("1*7=7 2*7=14 3*7=21 4*7=28 5*7=35 6*7=42 7*7=49\n");
//     printf("1*8=8 2*8=16 3*8=24 4*8=32 5*8=40 6*8=48 7*8=56 8*8=64\n");
//     printf("1*9=9 2*9=18 3*9=27 4*9=36 5*9=45 6*9=54 7*9=63 8*9=72 9*9=81\n");
// =================================switch 语句==========================================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int day = 0;
//     printf("please input the week");
//     scanf("%d",day);
//     switch (day)//括号内一定只能是整型
//     {
//     case 1:printf("Monday");//case 后一定是定量不能是变量
//     break;
//     case 2:.......;//不是所有case后都加break
//     break;
//     default:
//         printf("input fault");//输入错误、
//         break;
//     }

// system("pause");
// return 0;
// }
//======================================while语句======================================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=0;
//     while (i<100)
//     {
//         printf("%d\n",i);
//         i++;
//     }
    
// system("pause");
// return 0;
// }
//======================================================================================
//EOF-->文件结束标志
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int ret = 0;
//     int ch = 0;
//     char password[20] = {0};
//     printf("please input the password\n");
//     scanf("%s",password);//输入密码，并存放在password数组中
//     while((ch = getchar()) != '\n')//将缓存区清空
//     {
//         ;
//     }
//     printf("are you sure(Y/N)?\n");
//     if(ret == 'Y')
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("fail");
//     }
// system("pause");
// return 0;
// }
//==========================================for=================================
//=========n 的阶乘==================
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int ret = 1;
//     int sum = 0;
//     for ( n = 1; n <= 3 ; n++)
//     {
//         ret = 1;
//         for ( i = 1; i <=n; i++)
//         {
            
//             ret = ret * i;
//         }
//         sum = sum + ret;
//     }
//     printf("%d",sum);

// system("pause");
// return 0;
// }

#include<stdio.h>//效率高的写法
#include<stdlib.h>
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for ( n = 1; n <= 3 ; n++)
    {
        ret = ret * n;
        sum = sum + ret;
    }
    printf("%d",sum);

system("pause");
return 0;
}











