//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//#define KeyType int
//#define ednkey 999
//DateType a[100] = { 1 ,2 ,4 ,0 ,0 ,0 ,3 ,6 ,0 ,0 ,7 ,0 ,0 };
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
//void CreateBST(BiTree* bst);
//void InsertBST(BiTree* bst, DateType key);
//
//
//
//void CreateBST(BiTree* bst)
//{
//	KeyType key;
//	*bst = NULL;
//	scanf("%d",&key);
//	while (key != 999)
//	{
//		InsertBST(bst, key);
//		scanf("%d",&key);
//	}
//
//
//}
//void InsertBST(BiTree* bst, DateType key)
//{
//	BiTree s;
//	if (*bst == NULL)
//	{
//		s = (BiTree)malloc(sizeof(BiTNode));
//		s->data = key;
//		s->Lchild = NULL;
//		s->Rchild = NULL;
//		*bst = s;
//	}
//	else if (key < (*bst)->data)
//		InsertBST((&(*bst)->Lchild), key);//��s����������
//	else if (key > (*bst)->data)
//		InsertBST((&(*bst)->Rchild), key);//��s����������
//}
//void PreOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		printf("%d\n", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//}
//void InOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%d\n", root->data);
//		InOrder(root->Rchild);
//	}
//}
//void PostOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%d\n", root->data);
//	}
//}
//void OutLeaf(BiTree root)//�������Ҷ�ӽڵ�
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%d\n", root->data);
//		OutLeaf(root->Lchild);//ע������һ���ǵ����Լ��������ǵ���preorder
//		OutLeaf(root->Rchild);
//	}
//}
//
//
//int main(void)
//{
//	printf("0����ýڵ�Ϊ��\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreateBST(&tree);//������,��ʼ�����У�54 34 4 65 7634 234 123 54 67      999
//					  //����ճ��������̨���ڼ���
//	InOrder(tree);//�������//���1��������Ϊ�������У�����������������ɹ�
//
//
//
//
//	system("pause");
//	return 0;
//}