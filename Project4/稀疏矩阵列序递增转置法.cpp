//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ElementType int 
//#define MAXSIZE 30
//#define hang 5
//#define lie  5//����������
//typedef struct
//{
//	int row,col;
//	ElementType e;
//
//}Tripe;
//typedef struct
//{
//	Tripe data[MAXSIZE+1];
//	int m, n, len;
//}TSMatrix;
//
//TSMatrix* TransToTSMatrix(TSMatrix* A,ElementType(*M)[lie])//��ά�������ת��Ԫ��
//{
//	int i, j, k=0;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			if (M[i][j] != 0)
//			{
//A.data[]
//			}
//		
//		}
//	
//	
//	}
//
//
//}
//void TransposeTSMatrix(TSMatrix* A, TSMatrix* B)
//{
//	int i, j, k;
//	B->m = A->n; B->n = A->m; B->len = A->len;
//	if (B->len > 0)
//	{
//		j = 1;//jΪ��������������¼ת�ú����Ԫ������Ԫ���B�е��±�ֵ
//		for (k=1;k<A->n;k++)
//		{
//			for (i = 1; i < A->len; i++)
//			{
//				if (A->data[i].col == k)
//				{
//					B->data[j].row = A->data[i].col;
//					B->data[j].col = A->data[i].row;
//					B->data[j].e   = A->data[i].e;
//					j++;
//				}
//			}
//		}
//	}
//}
//
//
//int main(void)
//{
//	int M[hang][lie] = {
//		{1,0,0,0,0 },
//		{0,0,1,0,0 },
//		{0,1,0,0,0 },
//		{0,0,0,0,0 },
//		{0,0,1,0,0 }
//	};
//	TSMatrix* A = (TSMatrix*)malloc(sizeof(Tripe)*MAXSIZE);
//	A = TransToTSMatrix( A,M);
//
//
//
//
//
//
//	return 0;
//}