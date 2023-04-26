#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int test()
//{
//	if (0)
//		return 0;
//	printf("yes\n");
//	return 1;
//}
//
//int main() {
//
//	test();
//	return 0;
//}

//int main() {
//	int num = 3;
//	
//	if (num == 5)	//可将此行换成 if ( 5 == num )
//		printf("yes\n");
//
//	return 0;
//}

//输出1到100之间的奇数
//int main() {
//	/*for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			printf("%d是奇数\n", i);
//		}
//		
//	}*/
//
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d是奇数\n", i);
//		}
//		i++;
//	}
//	return 0;
// }

//switch 语句
//switch语句中，搭配break使用才能实现真正的分支
//switch语句允许嵌套使用
/*
switch(整型表达式)
{
	语句项	
}
*/
/*
语句项是一些case语句
case 整型常量表达式
	语句；
*/
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;//处理完 case1 后停止
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		//default 写在switch表达式中任何位置都行，只能有一条default语句，处理不匹配的值
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

/*
while 语法结构
//若表达式结果为真，则进行循环 表达式结果为假，则结束循环
//在while循环中， break 用于永久终止循环
//在while循环中， continue 跳过本次循环continue后面的代码，之间去判断部分
while(表达式)
	循环语句;
*/
//int main() {
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	//EOF - end of file - 文件结束标志
//	int ch = getchar();//getchar()获取一个字符
//	//printf("%c\n",ch);
//	putchar(ch);//putchar()输出一个字符，与上行等价
//	return 0;
//}