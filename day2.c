//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

/*变量的作用域和生命周期*/
////变量的作用域
//int g_1 = 2023;						//全局变量作用域为整个工程，在其他文件使用时要先声明（extern+数据类型+变量名）
//int main() {
//	
//	printf("1 %d\n", g_1);
//	for (int i = 0; i < 5; i++) {
//		const int a = 11;			//局部变量作用域为其最近{}内
//		printf("%d %d\n", i, a);
//	}
//	return 0;
//}

////生命周期
////变量的生命周期：变量创建到销毁的时间段
//int k = 100;		//全局变量的生命周期：程序（main函数）的生命周期
//int main() {
//	{
//		int b = 10; //局部变量的生命周期：从局部变量作用域开始到结束。
//	}
//	int a = 10;
//}

////常量
//#define max=100
//int main() {
//	//1.字面常量
//	
//	//2.const修饰的常变量,本质上是变量。
//	const int k = 10;
//	printf("%d", k);
//	int arr1[10] = { 0 }; //数组[]中只能是常量
//	//int arr2[k] 是错误的
//	
//	//3.#define 定义的标识符常量
//	
//	//4.枚举常量：可以一一枚举的常量
//	enum gender {		//枚举常量默认值为0，向下递增。
//		male,
//		female,
//		none
//	};
//}