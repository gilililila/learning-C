#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//�������룬ȷ������
//int main() {
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N)");
//
//	//��������
//	//getchar(); //��ȡһ���ַ����������ڿո����ʧЧ�����磺392 392��
//	int tep = 0;
//	while ((tep = getchar()) != '\n')
//		getchar();
//	//���һ��ѭ������getchar()��ȡ��\n
//
//	int ch = getchar(); //δ��������������getchar()��ȡ \n �����ȷ��ʧ��
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}

// for ѭ��
/*
for(���ʽ1;���ʽ2;���ʽ3)  //���ʽ1����ʼ�� �� ���ʽ2���ж� �� ���ʽ3������
	ѭ�����;
*/
//for ѭ���ڲ���Ҫ�ı�ѭ������
//for ѭ����ѭ��������������ҿ�

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("6\n");
//		}
//	}
//	return 0;
//}
//ֻ���ӡ���� "6" 
//�ڶ���forѭ����j�����3��������j��3��������ڶ���forѭ���жϲ���

//do...while()ѭ��
/*
do
	ѭ�����;
while(���ʽ);
*/
//ѭ��������ִ��һ��
//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}
