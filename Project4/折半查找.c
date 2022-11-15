////设置监视哨的查找算法
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#define LIST_SIZE 20
//#define KeyType int
//#define Otherinfo int
//typedef struct
//{
//	KeyType key;
//	Otherinfo otherdeta;
//}RecordType;
//typedef struct
//{
//	RecordType r[LIST_SIZE];
//	int length;
//}RecordList;//查找
//
//int BinSearch(RecordList list, KeyType k)
//{
//	int low = 1, high = list.length,mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (k == list.r[mid].key) return (mid);
//		else if (k < list.r[mid].key) high = mid - 1;
//		else low = mid + 1;
//	}
//	return 0;
//}
//
////5
////10    5 3 6 78 13 645 34 762 5 432   13
//int main(void)
//{
//	int i, j,value;
//	RecordList list;
//	scanf("%d",&list.length);
//	for (i = 1; i <= list.length; i++)scanf("%d",&list.r[i].key);
//	printf("请输入要查找的值，将返回其位置序号：");
//	scanf("%d", &value);
//	int adress;
//	adress=BinSearch(list, value);
//	if (adress)printf("\n序号为%d", adress);
//	else printf("0");
//	return 0;
//}
