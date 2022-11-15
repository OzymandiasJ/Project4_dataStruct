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
//void OutLeaf(BiTree root)//先序输出叶子节点
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%d\n", root->data);
//		OutLeaf(root->Lchild);//注意这里一定是调用自己，而不是调用preorder
//		OutLeaf(root->Rchild);
//	}
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
//
//
//
//
//	system("pause");
//	return 0;
//}