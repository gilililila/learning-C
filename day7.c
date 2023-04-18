#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//关键字 typedef 类型重定义
//typedef unsigned int u_int;
//int main() {
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	//两句代码等价
//	return 0;
//}

//static 静态的
//1.修饰局部变量 2.修饰全局变量 3.修饰函数
//变量存储的位置有三个区域：1.栈区 局部变量函数的参数  2.堆区 动态内存分配  3.静态区 全局变量，static修饰的静态变量

//void test() {
//	// int a = 1;  //此输出结果为10个2
//	static int a = 1;//此输出结果为 2 3 4 5 6 7 8 9 10 11
//	//局部变量 a 被 static 修饰后，改变了 a 的生命周期（本质上是改变了 a 的存储类型）
//	//完成一个循环后，a 的值不销毁
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;//extern 声明外部全局变量
//int main() {
//	printf("%d", g_val);//若无声明，则会报错
//	return 0;
//}
////static修饰全局变量，让这个全局变量只能在自己所在的源文件内部使用，其他源文件不能使用
////全局变量，在其他源文件内部可以被使用，因为全局变量有外部链接属性
////但被static修饰后，变为了内部链接属性，其他源文件不能链接到这个静态的全局变量！

//extern Add(int, int);//声明函数，才能使用外部的函数
//int main() {
//	int a = 2;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("sum=%d\n");
//	return 0;
//}
////static修饰函数，使得函数只能在自己所在的源文件中使用，不能在其他源文件内部使用
////本质：static将函数的外部链接属性变为内部链接属性


// #define 定义常量和宏
// define 为预处理指令
//1.define定义常量
//#define MAX =1000
//int main() {
//	printd("%d\n", 1000);
//	return 0;
//}
//2.define定义宏
//#define ADD(X,Y) X+Y
////#define ADD(X,Y) ((X)+(Y)) 此define定义的宏使得第二个printf输出结果为20
//int main() {
//	printf("%d\n", ADD(2, 3));
//	//输出结果为5
//	printf("%d\n", 4 * ADD(2, 3));
//	//输出结果为11
//	return 0;
//}