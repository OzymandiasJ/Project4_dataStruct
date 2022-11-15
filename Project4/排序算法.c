//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int n,i; 
//	int a[100] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//
//		for (i = 0; i < n; i++)scanf("%d", &a[i]);
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i - 1; j++)
//			{
//				if (a[j] > a[j + 1])
//				{
//					int temp; temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
//				}
//
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d", a[i]);
//			if (i < n - 1)printf(" ");
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
