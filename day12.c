#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//辗转相除法求最大公约数
//int main() 
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = 0;
//	while (tmp = m % n)
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("最大公约数为%d", n);
//	return 0;
//}

//找出100-200之间的质数
// m=a*b，则a和b一定有一个小于等于根号下m
// 函数sqrt() 用于开平方，要引用头文件 math.h
//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//偶数一定不是质数
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;//i能被j整除，i不是质数
//				break;
//			}
//		}
//		if (flag == 1) 
//		{
//			count++;
//			printf("%d ", i);//输出质数
//		}
//		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

// goto语句
/*
flag:
	语句;
	goto flag;
*/
//cmd 关机指令shutdown -s -t 60;取消关机指令shutdown -a
//c语言提供函数 system() 执行系统命令
