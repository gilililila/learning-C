#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//����

/*
strcpy���� ��ͷ�ļ� string.h ��
char * strcpy ( char * destination, const char * source );
��source�ַ������ƽ�destination�С�
*/
//int main() {
//	char arr1[20] = {0};
//	char arr2[] = "hello c!";
//	strcpy(arr1, arr2); //��arr2�е��ַ������Ƶ�arr1��
//	printf("%s\n", arr1);
//	return 0;
//}

/*
memset���� ��ͷ�ļ���
void * memset ( void * ptr, int value, size_t num );
��ptr�ռ���ǰnum����������Ϊvalue��
*/
//int main() {
//	char arr1[] = "hello world!";
//	memset(arr1,'x',5); //��arr1��ǰ5���ַ�����Ϊx
//	printf("%s\n", arr1);
//	return 0;
//}

//�Զ��庯��
/*�Զ��庯���к�����������ֵ���ͺͺ���������
ret_type fun_name ( paral, * )
{
	statement;
}
ret_type  ��������
fun_name  ������
paral     ��������
*/
//дһ���������ҳ����������ֵ
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
//	//�����ĵ���
//	int max = get_max(a, b);
//	
//	printf("%d\n", max);
//	return 0;
//}

//���һ������������������
//������������Ϊvoid����ʾ�����������κ�ֵ��Ҳ����Ҫ����
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

//������������Ҳ�����Ǻ���
//��ʽ�������������������еı�����ֻ���ں��������ù����в�ʵ������������������Զ�����
//ʵ�ʲ�������ʵ���������Ĳ������ڽ��к�������ʱ��ʵ�ʲ�����ֵ�ᴫ�ݸ��β�
