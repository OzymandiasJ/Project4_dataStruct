//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//
//void InsSort(int *r,int length)
//{
//	int i, j;
//	for (int i = 2; i < length; i++)
//	{
//		r[0] = r[i]; j = i - 1;//将待插入记录放到监视哨r[0]中
//		while (r[0]<r[j]) 
//		{
//			r[j + 1] = r[j]; 
//			j--;
//		}
//		r[j + 1] = r[0];
//	}
//}
//int main(void)
//{
//	int r[20] = {0};
//	int num;
//	scanf("%d",&num);
//	//8 54 321 6 34 32 76 8 543
//	for (int i = 1; i <= num; i++)scanf("%d",&r[i]);
//	InsSort(r, num);
//
//	for (int i = 0; i < num; i++)printf("%d ",r[i]);
//	return 0;
//}