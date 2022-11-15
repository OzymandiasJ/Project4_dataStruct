//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//
//
//
//int main()
//{
//	int m, n;
//	int k[10] = { 0 };
//	int ppp;
//	//printf("%d",club);
//	int i, j, T, num = 0;
//	int a[10][13 * 4] = { 0 };
//	int b;
//	//printf("请先输入测试组数：");
//	scanf("%d", &T);
//	getchar();//清理回车键
//	//printf("请输入卡牌：");
//	char c = ' ';
//	while (c == ' ') c = getchar();//先读取空格直到第一个字符
//	char str[7] = { "\0" };
//	for (i = 0; i < T; i++)//先逐组输入
//	{
//
//		while (c != '\n')//在按卡牌输入
//		{
//			scanf("%s %d", str, &num);
//			num--;
//			switch (c)
//			{
//			case 'd':a[i][num * 4 + 0] = 1;  break;//k[i]最终存储T+1行末尾牌序号位置
//			case 'c':a[i][num * 4 + 1] = 1;  break;
//			case 'h':a[i][num * 4 + 2] = 1;  break;
//			case 's':a[i][num * 4 + 3] = 1;  break;
//			}
//			c = getchar();
//			while (c == ' ') c = getchar();//消耗结尾回车键
//		}
//		ppp = 0;
//		while (a[i][ppp] == 0)
//		{
//			k[i]++;
//			ppp++;
//		}
//		if (i == T - 1) break;
//		c = getchar();
//		while (c == ' ') c = getchar();//先读取空格直到第一个字符
//
//	}
//
//
//	for (i = 0; i < T; i++)//输出结果
//	{
//		for (j = 51; j >= 0; j--)
//		{
//			if (0 == a[i][j]) continue;
//			m = j % 4; n = j / 4 + 1;
//			switch (m)
//			{
//			case 0: printf("diamond "); printf("%d", n); break;
//			case 1: printf("club "); printf("%d", n); break;
//			case 2: printf("heart "); printf("%d", n); break;
//			case 3: printf("spade "); printf("%d", n); break;
//			}
//			if (j > k[i]) printf(" ");
//		}
//		if (i <= T - 1) printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
////#define diamond 1
////#define club 2
////#define heart 3
////#define spade 4