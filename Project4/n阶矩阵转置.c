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
//	int m, n=1, num,T,div,i,j,k,temp=0;
//	while (scanf("%d", &div) != EOF)
//	{
//		//scanf("%d", &div);
//		for (j = 0; j < div; j++)
//		{
//			for (k = 0; k < div; k++)scanf("%d", &a[j][k]);
//		}
//		for (j = 0; j < div; j++)
//		{
//			for (k = j; k < div; k++)
//			{
//				temp = a[j][k]; a[j][k] = a[k][j]; a[k][j] = temp;
//			}
//		}
//		for (j = 0; j < div; j++)
//		{
//			for (k = 0; k < div; k++)
//			{
//				printf("%d", a[j][k]);
//				if (k < div - 1)printf(" ");
//				if (k == div - 1)printf("\n");
//			}
//		}
//	}
//
//	
//
//	return 0;
//}