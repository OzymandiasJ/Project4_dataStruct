//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//
//
//DateType a[100] = { 1 ,2 ,4 ,0 ,0 ,0 ,3 ,6 ,0 ,0 ,7 ,0 ,0 };
//int k = 0;
////ȫ�־�̬��ʼ����������a
//int status = 0;
//typedef struct Node//�������δ洢�ṹ
//{
//	DateType data;
//	struct Node* Lchild;
//	struct Node* Rchild;
//	int Ltag;//�ж��Ƿ������ӣ��еĻ�Ϊ0 ������Ϊ1������Lchildָ�����ǰ��
//	int Rtag;//�ж��Ƿ����Һ��ӣ��еĻ�Ϊ0 ������Ϊ1������Rchildָ���������
//}BiTNode;
//typedef BiTNode* BiTree;
//
//BiTNode* pre = NULL;//������ָ��pre
//BiTNode* q = NULL;//������ָ��pre
//
//
//
//int CreatBiTree(BiTree* T, DateType value)
//{
//
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
//void Inthread(BiTree root)//������������������
//{//preָ����һ�����ʵĽڵ㣬��ֵΪNULL
//	if (root != NULL)
//	{
//		Inthread(root->Lchild);
//		//
//		if (root->Lchild == NULL)
//		{
//			root->Ltag = 1;root->Lchild = pre;
//		}
//		if (pre!=NULL&&pre->Rchild==NULL)
//		{
//			pre->Rchild = root;pre->Rtag=1;
//		}
//		pre = root;
//		//
//		Inthread(root->Rchild);
//	}
//}
////BiTNode* Find_InOrder(BiTree &root, DateType index)//�������
////{
////	if (root != NULL)
////	{
////		Find_InOrder(root->Lchild, index);
////		if (root->data == index) return root;
////		
////		Find_InOrder(root->Rchild, index);
////	}
////}
//BiTNode* Inthread_FindPreNode(BiTNode*p)//����������������Ѱ���������ǰ��
//{
//	if (p->Ltag == 1)pre = p->Lchild;//ֱ����������
//	else 
//	{
//		for (q = p->Lchild;
//			q->Rtag == 0;
//			q = q->Rchild);
//		pre = q;
//	}
//	return (pre);
//}
//  
//int main(void)
//{
//	printf("0����ýڵ�Ϊ��\n");
//	int i, j, index = 0;
//	BiTNode* index_node = NULL;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//������,��ʼ�����У�1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //����ճ��������̨���ڼ���
//	printf("\n���������\n"); PreOrder(tree);//�������
//	printf("\n���������\n"); InOrder(tree);//�������
//	printf("\n���������\n"); PostOrder(tree);//�������
//	Inthread(tree);//������������������
//	//printf("������Ҫ��ѯ�Ľڵ��ֵ����������ǰ����㣺"); scanf("%d",&index);
//	//index_node = Find_InOrder(tree,index);
//	
//	//q=Inthread_FindPreNode(index_node);
//	printf("\n������������������ֵΪ%d�Ľڵ��ǰ�����ֵΪ��%d\n", tree->Rchild->Rchild->data,q->data);
//
//
//
//
//
//	system("pause");
//	return 0;
//}