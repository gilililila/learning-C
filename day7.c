#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ؼ��� typedef �����ض���
//typedef unsigned int u_int;
//int main() {
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	//�������ȼ�
//	return 0;
//}

//static ��̬��
//1.���ξֲ����� 2.����ȫ�ֱ��� 3.���κ���
//�����洢��λ������������1.ջ�� �ֲ����������Ĳ���  2.���� ��̬�ڴ����  3.��̬�� ȫ�ֱ�����static���εľ�̬����

//void test() {
//	// int a = 1;  //��������Ϊ10��2
//	static int a = 1;//��������Ϊ 2 3 4 5 6 7 8 9 10 11
//	//�ֲ����� a �� static ���κ󣬸ı��� a ���������ڣ��������Ǹı��� a �Ĵ洢���ͣ�
//	//���һ��ѭ����a ��ֵ������
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

//extern int g_val;//extern �����ⲿȫ�ֱ���
//int main() {
//	printf("%d", g_val);//������������ᱨ��
//	return 0;
//}
////static����ȫ�ֱ����������ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ�����ʹ��
////ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã���Ϊȫ�ֱ������ⲿ��������
////����static���κ󣬱�Ϊ���ڲ��������ԣ�����Դ�ļ��������ӵ������̬��ȫ�ֱ�����

//extern Add(int, int);//��������������ʹ���ⲿ�ĺ���
//int main() {
//	int a = 2;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("sum=%d\n");
//	return 0;
//}
////static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ���ʹ�ã�����������Դ�ļ��ڲ�ʹ��
////���ʣ�static���������ⲿ�������Ա�Ϊ�ڲ���������


// #define ���峣���ͺ�
// define ΪԤ����ָ��
//1.define���峣��
//#define MAX =1000
//int main() {
//	printd("%d\n", 1000);
//	return 0;
//}
//2.define�����
//#define ADD(X,Y) X+Y
////#define ADD(X,Y) ((X)+(Y)) ��define����ĺ�ʹ�õڶ���printf������Ϊ20
//int main() {
//	printf("%d\n", ADD(2, 3));
//	//������Ϊ5
//	printf("%d\n", 4 * ADD(2, 3));
//	//������Ϊ11
//	return 0;
//}