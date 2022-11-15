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
//int CreatBiTree(BiTree* T, DateType value)
//{
//	//DateType value;//要读入的值
//	//printf("input the value:");
//	//scanf("%d", &value);
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
//	printf("0代表该节点为空\n");
//	int i, j, Count = 0;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//创建树,初始化序列：1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //复制粘贴到控制台窗口即可
//	printf("\n先序遍历：\n"); PreOrder(tree);//先序遍历
//	printf("\n中序遍历：\n"); InOrder(tree);//中序遍历
//	printf("\n后序遍历：\n"); PostOrder(tree);//后序遍历
//	printf("\n先序输出叶子节点：\n"); OutLeaf(tree);//先序输出叶子节点
//	printf("\n输出叶子节点数目："); LeafCount(tree, &Count); printf("%d\n", Count);//先序输出叶子节点
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