//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//
//
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
//
//int CreatBiTree(BiTree *T, DateType value)
//{
//	if (value == 0)return 0;
//	BiTNode* p = (BiTNode*)malloc(sizeof(BiTNode));
//	if (p == NULL) { printf("error!δ�ɹ����䵽�ռ�"); return 0; }
//	p->data = value;
//	p->Lchild = p->Rchild = NULL;
//	*T = p;
//	//�ֱ𴴽���������
//	CreatBiTree(&(*T)->Lchild, a[k++]);
//	CreatBiTree(&(*T)->Rchild, a[k++]);
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
//int LeafCount_FenZhiFa(BiTree root)//���η���Ҷ�ӽڵ���Ŀ
//{
//	int LeafCount;
//	if (root == NULL)//���ΪҶ�ӽڵ������(����)����ò㼰�²�Ҷ�ӽڵ���Ϊ0������0
//		LeafCount = 0;
//	else if ((root->Lchild == NULL) && (root->Rchild == NULL))
//		LeafCount = 1;//���ΪΪҶ�ӽڵ㣬�򷵻�1
//	else  //����Ϊ����������Ҷ�ӽڵ���Ŀ֮��
//		LeafCount = LeafCount_FenZhiFa(root->Lchild) + LeafCount_FenZhiFa(root->Rchild);
//	
//	return LeafCount;
//
//}
//
//
//int main(void)
//{
//	printf("0����ýڵ�Ϊ��\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//������,��ʼ�����У�1 2 4 0 0 0 3 6 0 0 7 0 0
//	
//	printf("\n���������\n"); PreOrder(tree);//�������
//	printf("\n���������\n"); InOrder(tree);//�������
//	printf("\n���������\n"); PostOrder(tree);//�������
//	printf("\n�������Ҷ�ӽڵ㣺\n"); OutLeaf(tree);//�������Ҷ�ӽڵ�
//	printf("\n���η����Ҷ�ӽڵ���Ŀ��"); printf("%d\n", LeafCount_FenZhiFa(tree));
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}