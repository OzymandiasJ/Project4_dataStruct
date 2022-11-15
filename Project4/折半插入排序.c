//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//void BinSort(int r[],int  length)
//{
//	int x,low,high,mid;
//	for (int i = 2; i <= length; i++)
//	{
//		x = r[i];
//		low = 1; high = i - 1;
//		while (low <= high)//找到r[i]应在在的位置
//		{
//			mid = (low + high) / 2;
//			if (x < r[mid])high = mid - 1;
//			else low = mid + 1;
//		}
//		for (int j = i - 1; j >= low; j--)r[j + 1] = r[j];//把该位置之后的数据往后移动
//		r[low] = x;
//	}
//}
//int main(void)
//{
//	int r[20] = {0};
//	int num;
//	scanf("%d",&num);
//	//8 54 321 6 34 32 76 8 543
//	for (int i = 1; i <= num; i++)scanf("%d",&r[i]);
//	BinSort(r, num);
//	for (int i = 0; i < num; i++)printf("%d ", r[i]);
//	return 0;
//}