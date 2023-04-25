#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c语言是结构化的程序设计语言
//顺序结构
//选择结构
//循环结构

//语句：由分号隔开的就是一条语句

//分支语句和循环语句

//分支语句：if；switch
//循环语句：while；for；do while
//goto语句

//分支语句（选择结构）

//if 语句
/*
if (表达式)
	语句;
*/
/*
if (表达式)
	语句1; 
else
	语句2;
*/
/*
if (表达式1)
	语句1; 
else if (表达式2)
	语句2;
else
	语句3;
*/

//int main() {
//	
//	int age = 18;
//	if (age <= 18)
//		printf("未成年");
//	else if (age < 36 && age>18)
//		//错误写法 else if(18<age<=26)，则会先判断左边不等式，若左边不等式成立，则执行语句
//		printf("青壮年");
//	else
//		printf("中年");
//	// if 和 else 一般只能控制一条语句，加上{}后可控制多条语句。
//
//	return 0;
//}

//悬空else：
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//输出结果为：不打印
//else与最近的if相匹配，此为悬空else