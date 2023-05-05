#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<string.h>
#include<windows.h>

//计算n的阶乘
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int tol = 1;
//	while (i <= n) {
//		//tol = tol * i;
//		tol*=i;
//		i++;
//	}
//	printf("%d",tol);
//	return 0;
//}

//计算1！+2！+3！+...+10!
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		int tol = 1;
//		for (int j = 1; j <= i; j++) {
//			//tol = tol*j;
//			tol *= j;
//		}
//		sum = tol + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//4037913

//在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int v[], int n,);功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
//折半查找，二分查找
//int main() {
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 17;//要查找的数字
//	int sz = (sizeof(arr1) / sizeof(arr1[0]));//数组元素个数
//	int left = 0; 
//	int right = sz-1;
//
//	while (left<=right) {
//		int mid = ((left + right) / 2);
//		if (arr1[mid] < key)
//			left = mid + 1;
//		else if (arr1[mid] > key)
//			right = mid - 1;
//		else
//		{
//			printf("已找到，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到哦:(");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//int main() {
//	char arr1[] = ".......welcome.......";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1000毫秒
//		system("cls");//清空屏幕
//		left++; right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。
//int main() {
//	int i = 0;
//	char password[11] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//两个字符串比较，不能使用==，应该使用strcmp，应用头文件<string.h>
//		/*
//		strcmp( string1 , string2 )
//		比较 string1 与 string2 长度
//		若 string1 长度小于 string2 ，则返回值 <0
//		若 string1 长度大于 string2 ，则返回值 >0
//		若 string1 长度等于 string2 ，则返回值 =0
//		*/
//		if (strcmp(password, "123456") == 0) {
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//		if (i == 2) {
//			printf("登陆失败\n");
//		}
//	}
//	
//	return 0;
//}