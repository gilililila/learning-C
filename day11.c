#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<string.h>
#include<windows.h>

//����n�Ľ׳�
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

//����1��+2��+3��+...+10!
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

//��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int v[], int n,);���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
//�۰���ң����ֲ���
//int main() {
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 17;//Ҫ���ҵ�����
//	int sz = (sizeof(arr1) / sizeof(arr1[0]));//����Ԫ�ظ���
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
//			printf("���ҵ����±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���Ŷ:(");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���
//int main() {
//	char arr1[] = ".......welcome.......";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//����1000����
//		system("cls");//�����Ļ
//		left++; right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//int main() {
//	int i = 0;
//	char password[11] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", password);
//		//�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp��Ӧ��ͷ�ļ�<string.h>
//		/*
//		strcmp( string1 , string2 )
//		�Ƚ� string1 �� string2 ����
//		�� string1 ����С�� string2 ���򷵻�ֵ <0
//		�� string1 ���ȴ��� string2 ���򷵻�ֵ >0
//		�� string1 ���ȵ��� string2 ���򷵻�ֵ =0
//		*/
//		if (strcmp(password, "123456") == 0) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		}
//		if (i == 2) {
//			printf("��½ʧ��\n");
//		}
//	}
//	
//	return 0;
//}