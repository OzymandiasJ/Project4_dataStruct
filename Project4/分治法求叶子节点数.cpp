//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//
//
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
//
//int CreatBiTree(BiTree *T, DateType value)
//{
//	if (value == 0)return 0;
//	BiTNode* p = (BiTNode*)malloc(sizeof(BiTNode));
//	if (p == NULL) { printf("error!未成功分配到空间"); return 0; }
//	p->data = value;
//	p->Lchild = p->Rchild = NULL;
//	*T = p;
//	//分别创建左右子树
//	CreatBiTree(&(*T)->Lchild, a[k++]);
//	CreatBiTree(&(*T)->Rchild, a[k++]);
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
//void InOrder(BiTree root)//先序遍历
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
//int LeafCount_FenZhiFa(BiTree root)//分治法求叶子节点数目
//{
//	int LeafCount;
//	if (root == NULL)//如果为叶子节点的子树(空树)，则该层及下层叶子节点数为0，返回0
//		LeafCount = 0;
//	else if ((root->Lchild == NULL) && (root->Rchild == NULL))
//		LeafCount = 1;//如果为为叶子节点，则返回1
//	else  //否则为邹游子树的叶子节点数目之和
//		LeafCount = LeafCount_FenZhiFa(root->Lchild) + LeafCount_FenZhiFa(root->Rchild);
//	
//	return LeafCount;
//
//}
//
//
//int main(void)
//{
//	printf("0代表该节点为空\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//创建树,初始化序列：1 2 4 0 0 0 3 6 0 0 7 0 0
//	
//	printf("\n先序遍历：\n"); PreOrder(tree);//先序遍历
//	printf("\n中序遍历：\n"); InOrder(tree);//中序遍历
//	printf("\n后序遍历：\n"); PostOrder(tree);//后序遍历
//	printf("\n先序输出叶子节点：\n"); OutLeaf(tree);//先序输出叶子节点
//	printf("\n分治法输出叶子节点数目："); printf("%d\n", LeafCount_FenZhiFa(tree));
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