#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int test()
//{
//	if (0)
//		return 0;
//	printf("yes\n");
//	return 1;
//}
//
//int main() {
//
//	test();
//	return 0;
//}

//int main() {
//	int num = 3;
//	
//	if (num == 5)	//�ɽ����л��� if ( 5 == num )
//		printf("yes\n");
//
//	return 0;
//}

//���1��100֮�������
//int main() {
//	/*for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			printf("%d������\n", i);
//		}
//		
//	}*/
//
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d������\n", i);
//		}
//		i++;
//	}
//	return 0;
// }

//switch ���
//switch����У�����breakʹ�ò���ʵ�������ķ�֧
//switch�������Ƕ��ʹ��
/*
switch(���ͱ��ʽ)
{
	�����	
}
*/
/*
�������һЩcase���
case ���ͳ������ʽ
	��䣻
*/
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("����һ\n");
//		break;//������ case1 ��ֹͣ
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		//default д��switch���ʽ���κ�λ�ö��У�ֻ����һ��default��䣬����ƥ���ֵ
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

/*
while �﷨�ṹ
//�����ʽ���Ϊ�棬�����ѭ�� ���ʽ���Ϊ�٣������ѭ��
//��whileѭ���У� break ����������ֹѭ��
//��whileѭ���У� continue ��������ѭ��continue����Ĵ��룬֮��ȥ�жϲ���
while(���ʽ)
	ѭ�����;
*/
//int main() {
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	//EOF - end of file - �ļ�������־
//	int ch = getchar();//getchar()��ȡһ���ַ�
//	//printf("%c\n",ch);
//	putchar(ch);//putchar()���һ���ַ��������еȼ�
//	return 0;
//}