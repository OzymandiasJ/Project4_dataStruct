////ͨ������ָ����Ϣ���ȸ����У�����������У��������������������ȸ�����
////�򣩡��и������򣩡���������򣩱��������������������ֵΪ������0��������������
////����Ҳ�����Ǹ���������ָ����0��ʾ������1 5 8 0 0 0 6 0 0��ʾ����ͼ�Ķ�������
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//#include <iostream>
//using namespace std;
//
//DateType a[150000] ;
//int k = 0;
////ȫ�־�̬��ʼ����������a
//
//typedef struct Node//�������δ洢�ṹ
//{
//	DateType data;
//	struct Node* Lchild;
//	struct Node* Rchild;
//}BiTNode;
//typedef BiTNode* BiTree;
//
////void Creat(Tree*& t) {
////	t = (struct Tree*)malloc(sizeof(struct Tree));
////	cin >> t->data;
////	if (t->data == 0) {
////		t = NULL;
////		return;
////	}
////	Creat(t->lt);
////	Creat(t->rt);
////	return;
////}
//void CreatBiTree(BiTNode*& T)
//{
//
//	T = (BiTNode*)malloc(sizeof(BiTNode));
//	cin >> T->data;
//	//scanf("%d", T->data);//ע�����ﲻ����scanf������ᱨ��
//	if (T->data == 0)
//	{
//		T = NULL;
//		return ;
//	}
//
//	//�ֱ𴴽���������
//	CreatBiTree(T->Lchild);
//	CreatBiTree(T->Rchild);
//}
//void PreOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		printf("%d ", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//}
//void InOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%d ", root->data);
//		InOrder(root->Rchild);
//	}
//}
//void PostOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%d ", root->data);
//	}
//}
//void OutLeaf(BiTree root)//�������Ҷ�ӽڵ�
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%d ", root->data);
//		OutLeaf(root->Lchild);//ע������һ���ǵ����Լ��������ǵ���preorder
//		OutLeaf(root->Rchild);
//	}
//}
//void LeafCount(BiTree root, int* Count)//���Ҷ�ӽڵ���Ŀ
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			(*Count)++;//ע��++��������ȼ�����*
//		LeafCount(root->Lchild, Count);//ע������һ���ǵ����Լ��������ǵ���preorder
//		LeafCount(root->Rchild, Count);
//	}
//}
//
//
//int main(void)
//{
//	char c;
//	int i=0, j, Count = 0;
//
//	
//	BiTree tree = NULL;
//	CreatBiTree(tree);//������,��ʼ�����У�1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //����ճ��������̨���ڼ���
//					PreOrder(tree);//�������
//	printf("\n"); InOrder(tree);//�������
//	printf("\n"); PostOrder(tree);//�������
//	//printf("\n�������Ҷ�ӽڵ㣺\n"); OutLeaf(tree);//�������Ҷ�ӽڵ�
//	//printf("\n���Ҷ�ӽڵ���Ŀ��"); LeafCount(tree, &Count); printf("%d\n", Count);//�������Ҷ�ӽڵ�
//
//
//
//
//
//
//	return 0;
//}