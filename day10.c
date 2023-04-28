#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//输入密码，确认密码
//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)");
//
//	//清理缓冲区
//	//getchar(); //读取一个字符串，若存在空格则会失效（形如：392 392）
//	int tep = 0;
//	while ((tep = getchar()) != '\n')
//		getchar();
//	//设计一个循环，让getchar()读取至\n
//
//	int ch = getchar(); //未清理缓冲区，导致getchar()读取 \n 后输出确认失败
//	if (ch == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}

// for 循环
/*
for(表达式1;表达式2;表达式3)  //表达式1：初始化 ； 表达式2：判断 ； 表达式3：调整
	循环语句;
*/
//for 循环内部不要改变循环变量
//for 循环的循环变量尽量左闭右开

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("6\n");
//		}
//	}
//	return 0;
//}
//只会打印三次 "6" 
//第二个for循环后j变成了3，接下来j是3，不满足第二个for循环判断部分

//do...while()循环
/*
do
	循环语句;
while(表达式);
*/
//循环体至少执行一次
//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}
