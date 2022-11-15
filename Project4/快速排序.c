//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//int pos,x,num;
//void QKSort(int r[],int low,int high)
//{
//	if (low < high)
//	{
//		pos = QKPass(r,low,high);
//		QKSort(r,low,pos-1);
//		QKSort(r,pos+1,high);
//	}
//
//}
//int QKPass(int r[], int low, int high)
//{
//	x = r[low];
//	while (low < high)
//	{
//		while (low < high && r[high] >= x)
//			high--;//high从右到左找小于x的记录
//		if (low < high)  {r[low] = r[high];  low++;}
//
//		while (low < high && r[low] < x)
//			low++;//high从右到左找小于x的记录
//		if (low < high) { r[high] = r[low];  high--; }
//		for (int i = 1; i <= num; i++)printf("%d ", r[i]);
//		printf("\n");
//	}
//	r[low] = x;
//	
//	return low;
//
//}
//int main(void)
//{
//	int r[20] = {0};
//	scanf("%d",&num);
//	//8 54 321 6 34 32 76 8 543
//	for (int i = 1; i <= num; i++)scanf("%d",&r[i]);
//	QKSort(r, 1, num );
//	
//
//	for (int i = 1; i <= num; i++)printf("%d ",r[i]);
//	return 0;
//}