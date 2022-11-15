////通过带空指针信息的先根序列（亦称先序序列）创建二叉树，并进行先根（先
////序）、中根（中序）、后根（后序）遍历。二叉树结点数据域值为不等于0的整数（可能是
////正数也可能是负数），空指针用0表示，例如1 5 8 0 0 0 6 0 0表示如下图的二叉树。
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//#include <iostream>
//using namespace std;
//
//DateType a[150000] ;
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
//	//scanf("%d", T->data);//注意这里不能用scanf，否则会报错
//	if (T->data == 0)
//	{
//		T = NULL;
//		return ;
//	}
//
//	//分别创建左右子树
//	CreatBiTree(T->Lchild);
//	CreatBiTree(T->Rchild);
//}
//void PreOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		printf("%d ", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//}
//void InOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%d ", root->data);
//		InOrder(root->Rchild);
//	}
//}
//void PostOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%d ", root->data);
//	}
//}
//void OutLeaf(BiTree root)//先序输出叶子节点
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%d ", root->data);
//		OutLeaf(root->Lchild);//注意这里一定是调用自己，而不是调用preorder
//		OutLeaf(root->Rchild);
//	}
//}
//void LeafCount(BiTree root, int* Count)//输出叶子节点数目
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			(*Count)++;//注意++运算符优先级高于*
//		LeafCount(root->Lchild, Count);//注意这里一定是调用自己，而不是调用preorder
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
//	CreatBiTree(tree);//创建树,初始化序列：1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //复制粘贴到控制台窗口即可
//					PreOrder(tree);//先序遍历
//	printf("\n"); InOrder(tree);//中序遍历
//	printf("\n"); PostOrder(tree);//后序遍历
//	//printf("\n先序输出叶子节点：\n"); OutLeaf(tree);//先序输出叶子节点
//	//printf("\n输出叶子节点数目："); LeafCount(tree, &Count); printf("%d\n", Count);//先序输出叶子节点
//
//
//
//
//
//
//	return 0;
//}