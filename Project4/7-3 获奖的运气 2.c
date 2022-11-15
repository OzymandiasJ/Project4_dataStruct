//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#pragma warning(disable:4996)
//#define N 20
////小明的排名m
////参赛队伍总数n
////一、二、三等奖的获奖百分比p1，p2，p3
////
////
//int main(void)
//{
//
//	int T = 0,i,j;
//	int m[N], n, p[3];
//	int k[N][3];
//	scanf("%d",&T);
//	for (i=0; i < T; i++)
//	{ 
//		scanf("%d %d",&n,&m[i]);
//		scanf("%d %d %d", &p[0], &p[1],&p[2]);
//		for (j = 0; j < 3; j++)
//		{
//			if ((n * p[j] * 0.01 - (int)(n * p[j] * 0.01)) != 0)
//				k[i][j] = (int)(n * p[j] * 0.01) + 1;
//			else k[i][j] = (int)(n * p[j] * 0.01);
//		}
//	}
//
//	for (i = 0; i < T; i++)
//	{
//		if (i != T - 1)
//		{
//			if (m[i] <= k[i][0]) printf("gold\n");
//			else if (m[i] <= k[i][1]) printf("silver\n");
//			else if (m[i] <= k[i][2]) printf("bronze\n");
//			else printf("sorry\n");
//		}
//		else
//		{
//			if (m[i] <= k[i][0]) printf("gold");
//			else if (m[i] <= k[i][1]) printf("silver");
//			else if (m[i] <= k[i][2]) printf("bronze");
//			else printf("sorry");
//		}
//
//	}
//
//
//
//	return 0;
//	system("pause");
//}