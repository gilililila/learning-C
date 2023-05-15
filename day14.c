#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//函数调用

//1.传值调用
// 函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参

//2.传址调用
//将函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//让函数和函数外边的变量建立真正的联系，函数内部可以直接操作函数外部的变量

//用函数判断是否为素数
//int is_prime(int x) 
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++) 
//	{
//		if (x % y == 0) 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() 
//{
// 	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) 
//	{
//		if (is_prime(i) == 1) 
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//用函数判断是否为闰年
//一个函数没有写返回类型，则默认返回int类型
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0&& x % 100 != 0)||(x%400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1) {
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//写一个函数，进行二分查找
//int binary_search(int a[], int k, int s) 
//{
//	int left = 0;
//	int right = s-1;
//	
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到则返回下标，找不到则返回-1
//	int find = binary_search(arr, key, sz);
//	if (find == -1) 
//	{
//		printf("找不到哦 :(\n");
//	}
//	else
//	{
//		printf("找到了 :) 下标为%d\n", find);
//	}
//	return 0;
//}

