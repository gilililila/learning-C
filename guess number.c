#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>     
#include<stdlib.h>
#include<time.h>
/*
猜数字游戏
1.自动生成一个1-100的随机数
2.用户输入自己猜的数字
3. a.若猜对了，恭喜+返回主界面
   b.若猜错了，告知用户输入的数字与目标数字大小关系
4.共有5次机会，5次均猜错则失败
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
//	//生成随机数
//	//rand 函数返回0-32367之间的数字
//	//时间一直在变化，时间戳为一直在变化的数据
//	int tag = rand()%100+1;//0-32367 之间的数字 %100 后余数是 0-99，+1 则变为1-100
//	
//	//猜数字
//	int guess = 0;
//	int i = 1;
//	while (1) {
//		printf("请输入数字:>");
//		scanf("%d", &guess);
//		if (guess < tag) {
//			printf("真可惜，猜错了:( 你的数字太小了\n");
//			i++;
//		}
//		else if (guess > tag) {
//			printf("真可惜，猜错了:( 你的数字太大了\n");
//			i++;
//		}
//		else {
//			printf("恭喜你，猜对了:) 数字为%d\n",tag);
//			break;
//		}
//		if (i > 5) {
//			printf("你已经用完了5次机会，真可惜:( 你失败了，正确的数字是%d\n",tag);
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//利用时间戳生成随机种子
//	int input = 0;
//	do {
//		//进入菜单
//		menu();
//		//判断用户选择
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("已开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("已退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}