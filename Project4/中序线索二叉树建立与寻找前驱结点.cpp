//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType int 
//
//
//DateType a[100] = { 1 ,2 ,4 ,0 ,0 ,0 ,3 ,6 ,0 ,0 ,7 ,0 ,0 };
//int k = 0;
////全局静态初始化变量数组a
//int status = 0;
//typedef struct Node//定义树形存储结构
//{
//	DateType data;
//	struct Node* Lchild;
//	struct Node* Rchild;
//	int Ltag;//判断是否有左孩子，有的话为0 ，否则为1，并且Lchild指向遍历前驱
//	int Rtag;//判断是否有右孩子，有的话为0 ，否则为1，并且Rchild指向遍历后驱
//}BiTNode;
//typedef BiTNode* BiTree;
//
//BiTNode* pre = NULL;//线索化指针pre
//BiTNode* q = NULL;//线索化指针pre
//
//
//
//int CreatBiTree(BiTree* T, DateType value)
//{
//
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
//void InOrder(BiTree root)//中序遍历
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%d\n", root->data);
//		InOrder(root->Rchild);
//	}
//}
//void PostOrder(BiTree root)//后序遍历
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%d\n", root->data);
//	}
//}
//void Inthread(BiTree root)//中序线索二叉树建立
//{//pre指向上一个访问的节点，初值为NULL
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
////BiTNode* Find_InOrder(BiTree &root, DateType index)//先序遍历
////{
////	if (root != NULL)
////	{
////		Find_InOrder(root->Lchild, index);
////		if (root->data == index) return root;
////		
////		Find_InOrder(root->Rchild, index);
////	}
////}
//BiTNode* Inthread_FindPreNode(BiTNode*p)//中序线索二叉树中寻找中序遍历前驱
//{
//	if (p->Ltag == 1)pre = p->Lchild;//直接利用线索
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
//	printf("0代表该节点为空\n");
//	int i, j, index = 0;
//	BiTNode* index_node = NULL;
//	BiTree tree = NULL;
//	CreatBiTree(&tree, a[k++]);//创建树,初始化序列：1 2 4 0 0 0 3 6 0 0 7 0 0
//					  //复制粘贴到控制台窗口即可
//	printf("\n先序遍历：\n"); PreOrder(tree);//先序遍历
//	printf("\n中序遍历：\n"); InOrder(tree);//中序遍历
//	printf("\n后序遍历：\n"); PostOrder(tree);//后序遍历
//	Inthread(tree);//中序线索二叉树建立
//	//printf("请输入要查询的节点的值，将返回其前驱结点："); scanf("%d",&index);
//	//index_node = Find_InOrder(tree,index);
//	
//	//q=Inthread_FindPreNode(index_node);
//	printf("\n中序线索二叉树查找值为%d的节点的前驱结点值为：%d\n", tree->Rchild->Rchild->data,q->data);
//
//
//
//
//
//	system("pause");
//	return 0;
//}