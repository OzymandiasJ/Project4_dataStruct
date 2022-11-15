//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//void ShellInsert(int r[], int length, int delta);
//void ShellSort(int r[], int length, int delta[]);
//
//
//void ShellSort(int r[],  int length, int delta[])
//{
//	for (int i = 0; i < length; i++)
//	{
//		ShellInsert(r,  length, delta[i]);
//	}
//}
//void ShellInsert(int r[], int length, int delta)
//{
//	for (int i = 1 + delta; i < length; i++)
//	{
//		if (r[i] < r[i - delta])
//		{
//			r[0] = r[i];
//			for (int j = i - delta; j > 0 && r[0] < r[j]; j -= delta) 
//				r[j + delta] = r[j];
//
//			r[j + delta] = r[0];//这句代码的j,编译器都提示j未定义
//		
//		}
//	} 
//}
//int main(void)
//{
//	int r[20] = { 0 };
//	int num;
//	scanf("%d", &num);
//	//8     54 321 6 34 32 76 8 543
//	for (int i = 1; i <= num; i++)scanf("%d", &r[i]);
//	int delta[4] = { 4, 3, 2, 1 };
//	ShellSort(r, num,delta);
//	for (int i = 0; i < num; i++)printf("%d ", r[i]);
//	return 0;
//}