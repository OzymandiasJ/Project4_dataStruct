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
//int CreatBiTree(BiTree* T, DateType value)
//{
//	//DateType value;//Ҫ�����ֵ
//	//printf("input the value:");
//	//scanf("%d", &value);
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
//	printf("0����ýڵ�Ϊ��\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//������,��ʼ�����У�1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //����ճ��������̨���ڼ���
//	printf("\n���������\n"); PreOrder(tree);//�������
//	printf("\n���������\n"); InOrder(tree);//�������
//	printf("\n���������\n"); PostOrder(tree);//�������
//	printf("\n�������Ҷ�ӽڵ㣺\n"); OutLeaf(tree);//�������Ҷ�ӽڵ�
//	printf("\n���Ҷ�ӽڵ���Ŀ��"); LeafCount(tree, &Count); printf("%d\n", Count);//�������Ҷ�ӽڵ�
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