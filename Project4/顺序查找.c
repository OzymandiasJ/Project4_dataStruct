////���ü����ڵĲ����㷨
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
//}RecordList;//˳�����
//
//int SeqSearch(RecordList list, KeyType k)
//{
//	int i;
//	list.r[0].key = k; i = list.length;
//	while (list.r[i].key != k) i--;
//	return i;
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
//	printf("������Ҫ���ҵ�ֵ����������λ����ţ�");
//	scanf("%d", &value);
//	int adress;
//	adress=SeqSearch(list, value);
//	if (adress)printf("\n���Ϊ%d", adress);
//	else printf("�����ڸ�ֵ��");
//	return 0;
//}
