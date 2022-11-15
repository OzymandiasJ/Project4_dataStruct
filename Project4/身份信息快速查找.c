////设置监视哨的查找算法
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define list_size 20
//#define keytype int
//#define otherinfo int
//typedef struct
//{
//	char key[18];
//	int len;
//}recordtype;
//typedef struct
//{
//	recordtype r[list_size];
//	int length;
//}recordlist;//顺序查找
//void Init(recordlist* list)
//{
//	list->length = 0;
//	for (int i = 0; i < list_size; i++)
//	{	
//		list->r[i].len = 0;
//	}
//}
//int cmp(recordlist* list,char s[],int i,int k)//比较字符串
//{
//	int temp;
//	for (int j = 0; j < list->length; j++)
//	{
//		if (!strcmp(list->r[j].key, s))//如果该客户存在记录则加上去
//		{
//			scanf("%d",&temp);
//			if (temp < k)
//				list->r[j].len += 500;
//			else list->r[j].len += temp;
//			list->length++;
//			return 0;
//		}
//	}
//	strcpy(list->r[i].key, s);
//	scanf("%d", &temp);
//	if (temp < k)
//		list->r[i].len += 500;
//	else list->r[i].len += temp;
//	list->length++;
//	return 0;
//}
//int search(recordlist* list, char s[])
//{
//	for (int i = 0; i < list->length; i++)
//	{
//		if (!strcmp(list->r[i].key, s))
//		{
//			printf("%d", list->r[i].len);
//			return 0;
//		}
//	}
//	printf("No Info");
//	return 0;
//}
////5
////10    5 3 6 78 13 645 34 762 5 432   13
//int main(void) 
//{
//	int i, j,num,k,temp;
//	char s[list_size];
//	recordlist* list = (recordlist*)malloc(sizeof(recordlist));
//	Init(list); 
//	scanf("%d %d",&num,&k);
//	scanf("%s", list->r[0].key);
//	scanf("%d",&temp);
//	if (temp < k)
//		list->r[0].len += 500;
//	else list->r[0].len += temp;
//	list->length++;
//	//getchar();
//	for (int i=1;i<num;i++)
//	{
//		scanf("%s",s);
//		cmp(list, s, i, k);
//		//getchar();
//	}
//	scanf("%d",&num);
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%s",s);
//		search(list, s);
//		if (i < num - 1)printf("\n");
//	}
//	return 0;
//}
