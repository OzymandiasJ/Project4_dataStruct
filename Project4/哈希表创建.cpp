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
////�����ÿ��ŵ�ַ̽�ⷨ�е�����̽������ͻ�Ĺ�ϣ��
//
////��ϣ��Ľṹ����
//#define NULLKEY 0//���ڱ�ʾ��ϣ���λ����δ����Ԫ��
//typedef int KeyType;
//typedef struct {
//	KeyType key;
//}RecordType;
//
//typedef struct {
//	RecordType* HashElem;
//	int countElem;//���ڼ�¼��ϣ���еĵ�ǰԪ�ظ���
//	int hashSize;//���ڼ�¼��ǰ�Ĺ�ϣ����
//}HashTable;
//
//int hashsize[] = { 17, 19,29, 37,47 };
//int curSizeIndex = 0;
//int hashLength = hashsize[curSizeIndex];
//
//int RecreateHash(HashTable* ht);
//
////��ϣ��ĳ�ʼ��
////����һ���������ڴ�ռ����ڴ洢��ϣ���¼
//void  InitHashTable(HashTable* ht)
//{
//	ht->HashElem = (RecordType*)malloc(sizeof(RecordType) * hashLength);
//	if (ht->HashElem == NULL) {
//		cout << "�ռ䲻�㣬����ʧ��" << endl;
//		exit(0);
//	}
//	ht->hashSize = hashLength;
//	ht->countElem = 0;
//	for (int i = 0; i < hashLength; i++)
//		ht->HashElem[i].key = NULLKEY;
//}
//
////��ϣ�������
//void DestroyHashTable(HashTable* ht)
//{
//	free(ht->HashElem);
//	ht->HashElem = NULL;
//	ht->countElem = 0;
//	ht->hashSize = 0;
//}
//
////��ϣ���Ѱַ
//int HashAddr(KeyType key)
//{
//	return (key % hashLength);
//}
//
////��ϣ��Ԫ�ز���
////�Ȼ�ȡԪ�صĹ�ϣ��ַ
////����ַ���Ƿ���Ԫ��
////���ΪNULLKEY����ֱ�Ӳ���
////����������Բ���һ��ΪNULLKEY�Ŀɲ���λ�ã�����ҵ������
////��������ڿ���Ŀɲ���λ�ã������ʧ��
////����������ɲ���λ�õ�ͬʱ����һ������λ�ô��Ĺؼ��ֵ��ڴ�����Ԫ�أ������ʧ��
//int InsertHash(HashTable* ht, KeyType e)
//{
//	int addr = HashAddr(e);
//	while (ht->HashElem[addr].key != NULLKEY) {
//		if (ht->HashElem[addr].key == e) {
//			cout << "��Ԫ���Ѿ����ڣ�������룡" << endl;
//			exit(0);
//		}
//		addr = (addr + 1) % ht->hashSize;
//		if (addr == HashAddr(e)) {
//			cout << "�Ѿ�û�п��õĲ���λ����" << endl;
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
////��ϣ����ң�����ĳһ��Ԫ���Ƿ��Ѿ��ڹ�ϣ������
////��ȡ�ؼ��ֵĹ�ϣ��ַ
////�����ϣ��ַΪNULLKEY���򲻴���
////�����ϣ��ַ��Ϊ����Ԫ��ֵ�������������
////������ҹ������ҵ��ؼ����򷵻أ��ҵ�һ��NULLKEY�����ʧ��
////һֱ���ҵ�ԭ�еĹ�ϣ��ַ����˵����ϣ�������Ҳ�����
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
////��ϣ����ع���Ԫ���Ѿ����ˣ���Ҫ�����ϣ��Ŀռ䣩
////������һ�����Ĵ洢�ռ�
////��ʼ���µĹ�ϣ��ΪNULLKEY
////��ԭ�еĹ�ϣ��Ԫ�ز��뵽�¿ռ���
////�ͷŵ�ԭ�еľɿռ�
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
//		cout << "�ռ䲻�㣬�䴴ʧ��" << endl;
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
////������ϣ��
//void TranverseHash(HashTable* ht)
//{
//	cout << "��ϣ���е�Ԫ����:" << endl;
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
//		cout << "���Ҳ���" << endl;
//	else
//		cout << "���ڵ�ַ��" << res << endl;
//	return 0;
//}
//
//
