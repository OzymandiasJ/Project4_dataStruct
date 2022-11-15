//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
////1 2 3
////0 4 5
////0 0 6
//
//int main(void)
//{
//	int a[10][10];
//	int m, n, num,T,div,i,j,k,tag=0;
//	scanf("%d",&T);
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d",&div);
//		for (j = 0; j < div; j++)
//		{
//			for (k = 0; k < div; k++)scanf("%d",&a[j][k]);
//		}
//		//ÅÐ¶ÏÊÇ·ñÉÏÈý½Ç¾ØÕó
//		tag = 0;
//		for (j = 1; j < div; j++)
//		{
//			for (k = 0; k < j; k++)
//			{
//				if (a[j][k] != 0)tag = 1;
//			}
//		}
//		if (tag == 0)printf("YES\n");
//		else printf("NO\n");
//
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}