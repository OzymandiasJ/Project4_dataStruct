//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#pragma warning(disable:4996)
//#define N 20
////小明的排名m
////参赛队伍总数n
////一、二、三等奖的获奖百分比p1，p2，p3
//
//int main(void)
//{
//
//	int T,i,j,m[N]; //排名m
//	scanf("%d", &T);
//	int n[N];//队伍总数n
//	int k1[N], k2[N], k3[N];
//	int p1[N], p2[N], p3[N];
//	
//	for (i = 0; i < T ; i++)
//	{
//		scanf("%d %d",&n[i], &m[i]);
//		scanf("%d %d %d", &p1[i], &p2[i], &p3[i]);
//		k1[i] = (int)ceil(((double)n[i] * (double)p1[i] / 100.0));
//		k2[i] = (int)ceil(((double)n[i] * (double)p2[i] / 100.0));
//		k3[i] = (int)ceil(((double)n[i] * (double)p3[i] / 100.0));
//	}
//	for (i = 0; i < T; i++)
//	{
//		
//		if (m[i] <= k1[i]) printf("gold\n");
//		else if (m[i] <= (k1[i]+k2[i])) printf("silver\n");
//		else if (m[i] <= (k1[i] + k2[i]+k3[i])) printf("bronze\n");
//		else printf("sorry\n");
//	}
//
//	return 0;
// 	system("pause");
//}