#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数

/*
strcpy函数 （头文件 string.h ）
char * strcpy ( char * destination, const char * source );
将source字符串复制进destination中。
*/
//int main() {
//	char arr1[20] = {0};
//	char arr2[] = "hello c!";
//	strcpy(arr1, arr2); //将arr2中的字符串复制到arr1中
//	printf("%s\n", arr1);
//	return 0;
//}

/*
memset函数 （头文件）
void * memset ( void * ptr, int value, size_t num );
将ptr空间中前num个数据设置为value。
*/
//int main() {
//	char arr1[] = "hello world!";
//	memset(arr1,'x',5); //将arr1中前5个字符设置为x
//	printf("%s\n", arr1);
//	return 0;
//}

//自定义函数
/*自定义函数有函数名，返回值类型和函数参数。
ret_type fun_name ( paral, * )
{
	statement;
}
ret_type  返回类型
fun_name  函数名
paral     函数参数
*/
//写一个函数，找出两数的最大值
//int get_max(int x, int y)
//{
//	/*if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}*/
//	int z = 0;
//	z = x > y ? x : y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	
//	//函数的调用
//	int max = get_max(a, b);
//	
//	printf("%d\n", max);
//	return 0;
//}

//设计一个函数，将两数互换
//函数返回类型为void，表示函数不返回任何值，也不需要返回
//void swap(int* x, int* y) 
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main() {
//	int a = 10;
//	int b = 28;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//函数参数部分也可以是函数
//形式参数：函数名后括号中的变量，只有在函数被调用过程中才实例化，函数调用完后自动销毁
//实际参数：真实传给函数的参数，在进行函数调用时，实际参数的值会传递给形参
