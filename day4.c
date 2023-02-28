#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//转义字符
//int main() {
//	printf("\test\day");// \t为转义字符，为制表符。
//	printf("\a");
//	return 0;
//}
//// printf("%d",153)		打印整型
//// printf("%c",'a')		打印字符
//// printf("%s","abc")	打印字符串
//// \'-打印字符 ' , \"-打印字符 "
//// \r-回车
//// \n-换行
//// \v-垂直制表符
//// \ddd: ddd 是三个8进制数字，输出相应10进制数的ASCII码值
//// \xdd: dd 是两个16进制数字，输出相应10进制数的ASCII码值

//注释
//int main() {
//	//注释是用来解释代码的
//	/*int a=10;*/
//	//int b=20;
//	//双斜杠（//）是C++注释风格
//	//单斜杠加星号（/**/）是C注释风格
//	//C注释风格不支持嵌套注释
//	return 0;
//}

//选择语句
//int main() {
//	int input=0;
//	printf("好好学习吗？是1否0\n");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("good\n");
//	}
//	else {
//		printf("not good\n");
//	}
//	return 0;
//}

//循环语句
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		int num1 = 4;
//		int num2 = i % num1;
//		if (num2 == 0) {
//			printf("%d为4的倍数\n", i);
//		}
//	}
//	int k = 0;
//	while (k < 101) {
//		printf("%d\n", k);
//		int a1 = 3;
//		int a2 = k % a1;
//		if (a2 == 0) {
//			printf("%d为3的倍数\n", k);
//		}
//		k++;
//	}
//	return 0;
//}

//函数,与数学中函数相当
//int add(int a, int b) {
//	int c = 0;
//	c = a + b;
//	return c;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d\t%d", &num1, &num2);
//	int sum=add(num1, num2);
//	printf("%d%d\n", num1, num2);
//	printf("%d与%d的加和为%d", num1, num2, sum);
//	return 0;
//}

