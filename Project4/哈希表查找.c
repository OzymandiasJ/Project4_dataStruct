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
//typedef RecordType HashTable[m];//��ϣ�����Ͷ���
//int HashInit(HashTable* ht);
//int HashSearsh(HashTable ht, keytype key);
//// 8     54 324 75 34 567 432  76 43 
//int HashInit(HashTable* ht)//���úͳ�����������ţ����Ŷ�ַ_����̽����ɢ�з������ͻ
//{
//	int location;
//	scanf("%d",&ht[0]->other);//�������ݸ���������ڵ�һ����Ԫ��
//
//	for (int i = 1; i <= ht[0]->other; i++)
//		ht[i]->key = kong;//��ʼ��Ϊһ����ʾ�յ��ض�ֵ
//	int p = ht[0]->other - 1;
//	for (int i = 1; i <= ht[0]->other; i++)//�±��1��ʼ
//	{
//		scanf("%d", &ht[0]->key);//����ʱ�����ͷ�ڵ���,���ٶ���ռ��ʹ��
//		location = ht[0]->key % p;
//		if (ht[location]->key == kong)//����±�Ϊlocation��λ��û�з����ݣ��ͰѶ�������ݷŽ�ȥ
//			ht[location]->key = ht[0]->key;
//		else//����̽����ɢ��
//		{
//			int d = 1;
//			while (ht[location + d]->key != kong) d++;//ѭ������ʱ��ht[location + d]->keyΪ��
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
