#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>           //引用头文件
/*第一个c程序*/
//int main() {                //一个C程序中有且只有一个mian函数
//	printf("hell word!");	//输出hell word！
//	return 0;               //向操作系统返回一个数字0
//
//}
////编译+链接+运行代码=ctrl+f5
////程序运行过快，为了看见结果，需设置项目属性
////项目属性·链接器·系统·子系统，调整为控制台。

/*数据类型与其所占内存空间*/
//int main() {
//	printf("%d\n", 200);			//%d-打印一个整数
//	printf("%zd\n", sizeof(char));  //sizeof-计算类型或者变量所占空间大小
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	return 0;
//}

/*变量与常量*/
//#define year 2022
//int main() {
//	const int date = 221;
//	int a=0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n",sum);
//	printf("%d\n %d\n", year, date);
//	return 0;
//}