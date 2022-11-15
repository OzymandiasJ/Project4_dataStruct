//
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//#define KeyType int
//#define ednkey 999
//DateType a[100] = { 1 ,2 ,4 ,0 ,0 ,0 ,3 ,6 ,0 ,0 ,7 ,0 ,0 };
//int k = 0;
////全局静态初始化变量数组a
//
//typedef struct Node//定义树形存储结构
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
//		InsertBST((&(*bst)->Lchild), key);//将s插入左子树
//	else if (key > (*bst)->data)
//		InsertBST((&(*bst)->Rchild), key);//将s插入左子树
//}
//void PreOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		printf("%d\n", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//}
//void InOrder(BiTree root)//中序遍历
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%d\n", root->data);
//		InOrder(root->Rchild);
//	}
//}
//void PostOrder(BiTree root)//先序遍历
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
//	//要删除的节点为p，p双亲结点为f，假设p是f的左子，s为p中序遍历序列的前驱,q为s的双亲节点
//	p = t; f = NULL;
//	while (p)//查找关键字为k的节点
//	{
//		if (p->data == k) break;
//		f = p;
//		if (p->data > k)p = p->Lchild;
//		else p = p->Rchild;
//	}
//	if (p== NULL) return t;//节点不存在则返回根节点
//	if (p->Lchild == NULL)//只有右子树
//	{   //f为p的双亲结点
//		if (f == NULL) t = p->Lchild;//如果找到的p是根节点，则
//		//删除该节点，返回左子（因为右子为空）
//		else if (f->Lchild == p)//如果p是f的左子，
//			f->Lchild = p->Rchild;//就把p的右子挂在f左子上
//		else
//			f->Rchild = p->Rchild;
//		free(p);//释放被删除的节点p
//	}
//	else//p有左子树或者说左右子树都有
//	{
//		q = p; s = p->Lchild;
//		while (s->Lchild)//在p的左子树中找右下节点，即最大节点
//		{
//			q = s; s = s->Rchild;//q是s的双亲结点
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
//	printf("0代表该节点为空\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreateBST(&tree);//创建树,初始化序列：54 34 4 65 7634 234 123 54 67      999
//					  //复制粘贴到控制台窗口即可
//	InOrder(tree);//先序遍历//如果1遍历序列为递增序列，则二叉排序树建树成功
//	DeleteNode(tree, 65);//successful
//	InOrder(tree);
//
//
//	system("pause");
//	return 0;
//}