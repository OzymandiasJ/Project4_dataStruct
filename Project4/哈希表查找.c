//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define m 30
//#define kong 9999
//#define NULLKEY
//typedef int keytype;
//typedef int otherinfo;
//typedef struct
//{
//	keytype key;
//	otherinfo other;
//
//}RecordType;
//typedef RecordType HashTable[m];//哈希表类型定义
//int HashInit(HashTable* ht);
//int HashSearsh(HashTable ht, keytype key);
//// 8     54 324 75 34 567 432  76 43 
//int HashInit(HashTable* ht)//采用和除留余数法存放，开放定址_线性探测再散列法处理冲突
//{
//	int location;
//	scanf("%d",&ht[0]->other);//读入数据个数，存放在第一个单元中
//
//	for (int i = 1; i <= ht[0]->other; i++)
//		ht[i]->key = kong;//初始化为一个表示空的特定值
//	int p = ht[0]->other - 1;
//	for (int i = 1; i <= ht[0]->other; i++)//下标从1开始
//	{
//		scanf("%d", &ht[0]->key);//先暂时存放在头节点中,减少额外空间的使用
//		location = ht[0]->key % p;
//		if (ht[location]->key == kong)//如果下标为location的位置没有放数据，就把读入的数据放进去
//			ht[location]->key = ht[0]->key;
//		else//线性探测再散列
//		{
//			int d = 1;
//			while (ht[location + d]->key != kong) d++;//循环结束时候，ht[location + d]->key为空
//			ht[location + d]->key = ht[0]->key;
//		}
//	
//	
//	}
//}
//int HashSearsh(HashTable ht, keytype key)
//{
//	
//
//}
//
//
//
//int main(void)
//{
//	HashTable* ht=(HashTable*)malloc(sizeof(HashTable)*m);
//	HashInit(&ht);
//
//
//
//	return 0;
//}
