//
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
//	scanf("%d", &key);
//	while (key != 999)
//	{
//		InsertBST(bst, key);
//		scanf("%d", &key);
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
//BiTNode* DeleteNode(BiTree* t, DateType k)
//{
//	BiTNode* p, * f, * s, *q;
//	//Ҫɾ���Ľڵ�Ϊp��p˫�׽��Ϊf������p��f�����ӣ�sΪp����������е�ǰ��,qΪs��˫�׽ڵ�
//	p = t; f = NULL;
//	while (p)//���ҹؼ���Ϊk�Ľڵ�
//	{
//		if (p->data == k) break;
//		f = p;
//		if (p->data > k)p = p->Lchild;
//		else p = p->Rchild;
//	}
//	if (p== NULL) return t;//�ڵ㲻�����򷵻ظ��ڵ�
//	if (p->Lchild == NULL)//ֻ��������
//	{   //fΪp��˫�׽��
//		if (f == NULL) t = p->Lchild;//����ҵ���p�Ǹ��ڵ㣬��
//		//ɾ���ýڵ㣬�������ӣ���Ϊ����Ϊ�գ�
//		else if (f->Lchild == p)//���p��f�����ӣ�
//			f->Lchild = p->Rchild;//�Ͱ�p�����ӹ���f������
//		else
//			f->Rchild = p->Rchild;
//		free(p);//�ͷű�ɾ���Ľڵ�p
//	}
//	else//p������������˵������������
//	{
//		q = p; s = p->Lchild;
//		while (s->Lchild)//��p���������������½ڵ㣬�����ڵ�
//		{
//			q = s; s = s->Rchild;//q��s��˫�׽��
//		}
//		if (q == p) q->Lchild = s->Lchild;
//		else q->Rchild = s->Lchild;
//		p->data = s->data;
//		free(s);
//	}
//	return t;
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
//	DeleteNode(tree, 65);//successful
//	InOrder(tree);
//
//
//	system("pause");
//	return 0;
//}