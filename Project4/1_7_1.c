//#include<stdio.h>
//#include<stdlib.h>
//#define _CRT_SECURE_NO_DEPRECATE
//int main(void)
//{
//	int p, n, i,j;//n为选择数，p为拥有的钱数
//	char c;
//	printf("请输入钱数和选择数：");
//	scanf_s("%d %d", &p, &n);
//	getchar();
//	char fan[20][20] = { '\0' };//存储饭店名字
//	int price[20];			//存储饭店价格
//	printf("请输入每个饭店名字和价钱：\n");
//	for (i = 0; i < n; i++)
//	{
//		for(j=0;j<100;j++)
//		{
//			c = getchar();
//			if (c != ' ')
//			{
//				fan[i][j] = c;
//				fan[i][j + 1] = '\0';
//			}
//			else break;
//			
//		}
//		scanf_s("%d", &price[i]);
//		getchar();//读取末尾回车键
//		/*puts(fan[i]);
//		printf("%d\n",price[i]);*/
//	}
//
//
//	//puts(fan[0]); printf("%d",price[0]);
//	int max=price[0], remain=p,min= price[0];
//	for (i = 1; i < n; i++)//找到单价最小值
//	{
//		if (min > price[i]) min = price[i];
//	}
//	int num = 0;
//	for (int i = 0; i < sizeof(price) / 4 - 1; i++)//对菜单及价格进行排序操作
//	{
//		for (int j = 0; j < sizeof(price) / 4 - 1 - i; j++)
//		{
//			if (price[j] < price[j + 1])
//			{
//				int temp; temp = price[j]; price[j] = price[j + 1]; price[j + 1] = temp;
//				char ctemp[20];strcpy( ctemp,fan[j]); strcpy(fan[j], fan[j + 1]); strcpy(fan[j + 1], ctemp);
//			}
//		}
//	}
//	i = 0;
//	while (remain >= min)//只要余额大于最小单价，循环就继续
//	{
//		if (remain < price[i])
//		{
//			i++;
//			continue;
//		}
//		puts(fan[i]);
//		remain -= price[i];
//		i++;
//
//	}
//	system("pause");
//	return 0;
//}
