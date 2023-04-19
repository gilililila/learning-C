#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针
//指针就是地址

//int main() {
//	int a = 10; //a 在内存中要分配空间—4个字节
//	
//	printf("%p\t%d\n", &a,a);// %p 打印的是地址
//	// &a 只会拿出从前往后的第一个地址
//	
//	int *pa = &a;// pa 是用来存放地址的，在c语言中，pa 叫做指针变量
//	// * 说明 pa 是指针
//	//int说明 pa 指向的对象是int类型
//
//	char ch1 = 'w';
//	char* pc = &ch1;
//	printf("%p\t%c\n", &ch1, ch1);
//	return 0;
//}

//int main() {
//	int a = 10;
//
//	int * pa = &a;
//
//	*pa = 20;// * 解引用操作
//	//*pa就是通过pa里面的地址，找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main() {
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//结果均为8（机器为64位机器，64位—64bit—8byte）
//	//指针的大小是相同的
//	//指针需要多大空间取决于地址的存储需要
//	
//	//指针大小在32位平台是4个字节，64位是8个字节
//
//	return 0;
//}



//结构体
//用于描述复杂对象

//结构体可以让c语言创建新的类型

////创建学生的变量
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////创建书的变量
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main() {
//	
//	struct stu s = { "张三",20,60.0 }; //结构体变量的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//操作符 . ：找到结构体的成员，并访问他的成员
//	//结构体变量.成员变量：找到结构体的成员，并访问他的成员
//	
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	//%lf 打印双精度浮点数   %f 打印单精度浮点数
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	// -> 指针操作符，结构体指针->成员变量名
//	
//	return 0;
//}