#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//շת����������Լ��
//int main() 
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = 0;
//	while (tmp = m % n)
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("���Լ��Ϊ%d", n);
//	return 0;
//}

//�ҳ�100-200֮�������
// m=a*b����a��bһ����һ��С�ڵ��ڸ�����m
// ����sqrt() ���ڿ�ƽ����Ҫ����ͷ�ļ� math.h
//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//ż��һ����������
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;//i�ܱ�j������i��������
//				break;
//			}
//		}
//		if (flag == 1) 
//		{
//			count++;
//			printf("%d ", i);//�������
//		}
//		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

// goto���
/*
flag:
	���;
	goto flag;
*/
//cmd �ػ�ָ��shutdown -s -t 60;ȡ���ػ�ָ��shutdown -a
//c�����ṩ���� system() ִ��ϵͳ����
