#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<stdlib.h>
#include<time.h>
/*
��������Ϸ
1.�Զ�����һ��1-100�������
2.�û������Լ��µ�����
3. a.���¶��ˣ���ϲ+����������
   b.���´��ˣ���֪�û������������Ŀ�����ִ�С��ϵ
4.����5�λ��ᣬ5�ξ��´���ʧ��
*/

//void menu()
//{
//	printf("******************\n");
//	printf("******0.quit******\n");
//	printf("******1.play******\n");
//	printf("******************\n");
//}
//
//void game()
//{
//	//���������
//	//rand ��������0-32367֮�������
//	//ʱ��һֱ�ڱ仯��ʱ���Ϊһֱ�ڱ仯������
//	int tag = rand()%100+1;//0-32367 ֮������� %100 �������� 0-99��+1 ���Ϊ1-100
//	
//	//������
//	int guess = 0;
//	int i = 1;
//	while (1) {
//		printf("����������:>");
//		scanf("%d", &guess);
//		if (guess < tag) {
//			printf("���ϧ���´���:( �������̫С��\n");
//			i++;
//		}
//		else if (guess > tag) {
//			printf("���ϧ���´���:( �������̫����\n");
//			i++;
//		}
//		else {
//			printf("��ϲ�㣬�¶���:) ����Ϊ%d\n",tag);
//			break;
//		}
//		if (i > 5) {
//			printf("���Ѿ�������5�λ��ᣬ���ϧ:( ��ʧ���ˣ���ȷ��������%d\n",tag);
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//����ʱ��������������
//	int input = 0;
//	do {
//		//����˵�
//		menu();
//		//�ж��û�ѡ��
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�ѿ�ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("���˳���Ϸ\n");
//			break;
//		default:
//			printf("����������\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}