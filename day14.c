#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//��������

//1.��ֵ����
// �������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��

//2.��ַ����
//�������ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//�ú����ͺ�����ߵı���������������ϵ�������ڲ�����ֱ�Ӳ��������ⲿ�ı���

//�ú����ж��Ƿ�Ϊ����
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

//�ú����ж��Ƿ�Ϊ����
//һ������û��д�������ͣ���Ĭ�Ϸ���int����
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

//дһ�����������ж��ֲ���
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
//	//�ҵ��򷵻��±꣬�Ҳ����򷵻�-1
//	int find = binary_search(arr, key, sz);
//	if (find == -1) 
//	{
//		printf("�Ҳ���Ŷ :(\n");
//	}
//	else
//	{
//		printf("�ҵ��� :) �±�Ϊ%d\n", find);
//	}
//	return 0;
//}

