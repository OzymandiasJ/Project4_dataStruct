//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//    int N;
//    char ccc; 
//    scanf("%d %c",&N,&ccc);
//    double shulie[100];
//    int i,j,k;
//    for (i = 1; i < 50; i++) shulie[i] = 2*i * i-1;
//    int num = shulie[1];
//    for (i = 2; i < 50; i++) {if (shulie[i] < N) num = shulie[i];}//找到输出数
//    int extra = N - num;//剩余数
//    int n0 = sqrt((num+1)/2)*2-1;//第一行数量
//    int n = sqrt((num + 1) / 2);//行数
//    for (i=0;i<n;i++)
//    {
//        for (j = 0; j < i;j++)printf(" ");
//        for(k=0;k<n0-2*j;k++)printf("%c",ccc);
//        for (j = 0; j < i; j++)printf(" "); 
//                printf("\n");
//    } 
//    for (i = n-2; i >= 0; i--)
//    {
//        for (j = 0; j < i; j++)printf(" ");
//        for (k = 0; k < n0 - 2 * j; k++)printf("%c", ccc);
//        for (j = 0; j < i; j++)printf(" "); printf("\n");
//     }
//
//
//
//      return 0; 
//} 