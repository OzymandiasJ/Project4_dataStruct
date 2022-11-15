//
//
//#include<iostream>
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<vector>
//#include<map>
//#include<stack>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
////构造用开放地址探测法中的线性探测解决冲突的哈希表
//
////哈希表的结构定义
//#define NULLKEY 0//用于表示哈希表此位置尚未填入元素
//typedef int KeyType;
//typedef struct {
//	KeyType key;
//}RecordType;
//
//typedef struct {
//	RecordType* HashElem;
//	int countElem;//用于记录哈希表中的当前元素个数
//	int hashSize;//用于记录当前的哈希表长度
//}HashTable;
//
//int hashsize[] = { 17, 19,29, 37,47 };
//int curSizeIndex = 0;
//int hashLength = hashsize[curSizeIndex];
//
//int RecreateHash(HashTable* ht);
//
////哈希表的初始化
////分配一块连续的内存空间用于存储哈希表记录
//void  InitHashTable(HashTable* ht)
//{
//	ht->HashElem = (RecordType*)malloc(sizeof(RecordType) * hashLength);
//	if (ht->HashElem == NULL) {
//		cout << "空间不足，申请失败" << endl;
//		exit(0);
//	}
//	ht->hashSize = hashLength;
//	ht->countElem = 0;
//	for (int i = 0; i < hashLength; i++)
//		ht->HashElem[i].key = NULLKEY;
//}
//
////哈希表的销毁
//void DestroyHashTable(HashTable* ht)
//{
//	free(ht->HashElem);
//	ht->HashElem = NULL;
//	ht->countElem = 0;
//	ht->hashSize = 0;
//}
//
////哈希表的寻址
//int HashAddr(KeyType key)
//{
//	return (key % hashLength);
//}
//
////哈希表元素插入
////先获取元素的哈希地址
////看地址处是否有元素
////如果为NULLKEY，则直接插入
////否则向后线性查找一个为NULLKEY的可插入位置，如果找到则插入
////如果不存在空余的可插入位置，则插入失败
////如果在搜索可插入位置的同时发现一个等于位置处的关键字等于待插入元素，则插入失败
//int InsertHash(HashTable* ht, KeyType e)
//{
//	int addr = HashAddr(e);
//	while (ht->HashElem[addr].key != NULLKEY) {
//		if (ht->HashElem[addr].key == e) {
//			cout << "该元素已经存在，无需插入！" << endl;
//			exit(0);
//		}
//		addr = (addr + 1) % ht->hashSize;
//		if (addr == HashAddr(e)) {
//			cout << "已经没有可用的插入位置了" << endl;
//			RecreateHash(ht);
//			exit(0);
//		}
//	}
//	ht->HashElem[addr].key = e;
//	ht->countElem++;
//	if (ht->countElem == ht->hashSize)
//		RecreateHash(ht);
//	return 1;
//}
//
////哈希表查找，查找某一个元素是否已经在哈希表中了
////获取关键字的哈希地址
////如果哈希地址为NULLKEY，则不存在
////如果哈希地址处为其他元素值，则继续向后查找
////如果查找过程中找到关键字则返回，找到一个NULLKEY则查找失败
////一直查找到原有的哈希地址处，说明哈希表已满且不存在
//int  HashSearch(HashTable* ht, KeyType e)
//{
//	int addr = HashAddr(e);
//	while (ht->HashElem[addr].key != e) {
//		if (addr == HashAddr(e) || ht->HashElem[addr].key == NULLKEY)
//			return -1;
//		addr = (addr + 1) % ht->hashSize;
//	}
//	return addr;
//}
//
//int HashSearch2(HashTable* ht, KeyType e)
//{
//	int addr = HashAddr(e);
//	while (ht->HashElem[addr].key != NULLKEY) {
//		if (ht->HashElem[addr].key == e)
//			return addr;
//		addr = (addr + 1) % ht->hashSize;
//	}
//	return -1;
//}
//
////哈希表的重构（元素已经满了，需要增大哈希表的空间）
////先申请一块更大的存储空间
////初始化新的哈希表为NULLKEY
////将原有的哈希表元素插入到新空间中
////释放掉原有的旧空间
//int RecreateHash(HashTable* ht)
//{
//	RecordType* oldTemp = ht->HashElem;
//	int oldLen = ht->hashSize;
//
//	curSizeIndex++;
//	ht->hashSize = hashLength = hashsize[curSizeIndex];
//	ht->HashElem = (RecordType*)malloc(sizeof(RecordType) * hashLength);
//
//	if (ht->HashElem == NULL) {
//		cout << "空间不足，充创失败" << endl;
//		ht->HashElem = oldTemp;
//		ht->hashSize = hashLength = oldLen;
//		exit(0);
//	}
//
//	for (int i = 0; i < oldLen; i++)
//		if (oldTemp[i].key != NULLKEY)
//			InsertHash(ht, oldTemp[i].key);
//	return 1;
//}
//
////遍历哈希表
//void TranverseHash(HashTable* ht)
//{
//	cout << "哈希表中的元素有:" << endl;
//	for (int i = 0; i < ht->hashSize; i++)
//		if (ht->HashElem[i].key != NULLKEY)
//			cout << ht->HashElem[i].key << " ";
//}
//
//
//int main()
//{
//	HashTable ht;
//	InitHashTable(&ht);
//
//	int n;
//	cin >> n;
//
//	KeyType key;
//	for (int i = 0; i < n; i++) {
//		cin >> key;
//		InsertHash(&ht, key);
//	}
//
//	TranverseHash(&ht);
//	int res = HashSearch(&ht, 100);
//	if (res == -1)
//		cout << "查找不到" << endl;
//	else
//		cout << "其在地址：" << res << endl;
//	return 0;
//}
//
//
