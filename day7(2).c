#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ��
//ָ����ǵ�ַ

//int main() {
//	int a = 10; //a ���ڴ���Ҫ����ռ䡪4���ֽ�
//	
//	printf("%p\t%d\n", &a,a);// %p ��ӡ���ǵ�ַ
//	// &a ֻ���ó���ǰ����ĵ�һ����ַ
//	
//	int *pa = &a;// pa ��������ŵ�ַ�ģ���c�����У�pa ����ָ�����
//	// * ˵�� pa ��ָ��
//	//int˵�� pa ָ��Ķ�����int����
//
//	char ch1 = 'w';
//	char* pc = &ch1;
//	printf("%p\t%c\n", &ch1, ch1);
//	return 0;
//}

//int main() {
//	int a = 10;
//
//	int * pa = &a;
//
//	*pa = 20;// * �����ò���
//	//*pa����ͨ��pa����ĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main() {
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//�����Ϊ8������Ϊ64λ������64λ��64bit��8byte��
//	//ָ��Ĵ�С����ͬ��
//	//ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ
//	
//	//ָ���С��32λƽ̨��4���ֽڣ�64λ��8���ֽ�
//
//	return 0;
//}



//�ṹ��
//�����������Ӷ���

//�ṹ�������c���Դ����µ�����

////����ѧ���ı���
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////������ı���
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main() {
//	
//	struct stu s = { "����",20,60.0 }; //�ṹ������Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//������ . ���ҵ��ṹ��ĳ�Ա�����������ĳ�Ա
//	//�ṹ�����.��Ա�������ҵ��ṹ��ĳ�Ա�����������ĳ�Ա
//	
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	//%lf ��ӡ˫���ȸ�����   %f ��ӡ�����ȸ�����
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	// -> ָ����������ṹ��ָ��->��Ա������
//	
//	return 0;
//}