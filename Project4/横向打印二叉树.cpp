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
//int PostTreeDepth(BiTree root)//����������������߶�
//{  
//	int hl, hr, max;
//	if (root != NULL)
//	{
//		hl = PostTreeDepth(root->Lchild);
//		hr = PostTreeDepth(root->Rchild);
//		max = hl > hr ? hl : hr;
//		return (max + 1);
//	}
//	else return 0;//��Ҷ�ӽڵ㷵��0�������ϵ���
//}
//void PrintTree(BiTree root,int nLayer)
//{//�����ӡ������ʵΪ�����ӡ˳ʱ����ת��ʮ��
////���Է���ʵ�������������������Ҹ������
//	if (root == NULL)return;
//	PrintTree(root->Rchild, nLayer + 1);
//	for (int n = 0; n < nLayer; n++)printf("    ");
//	printf("%d\n",root->data);
//	PrintTree(root->Lchild, nLayer + 1);
//
//}
//
//
//int main(void)
//{
//	printf("0����ýڵ�Ϊ��\n");
//	int i, j, Count = 0,h=0;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//������,��ʼ�����У�1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //����ճ��������̨���ڼ���
//	printf("\n���������\n"); PreOrder(tree);//�������
//	printf("\n���������\n"); InOrder(tree);//�������
//	printf("\n���������\n"); PostOrder(tree);//�������
//	printf("\n�����ӡ��������\n");PrintTree(tree, h);
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}