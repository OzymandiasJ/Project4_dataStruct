////对于给定的二叉树，输出其先序序列、中序序列、后序序列并输出叶子结点数。
////
////输入格式 :
////二叉树的层次序列。
////
////提示：一棵二叉树的层次序列是一个字符串，若字符是‘#’, 表示该二叉树是空树，否则该字符是相应结点的数据元素。
////
////输出格式 :
////若是非空二叉树，则输出四行内容 第一行是二叉树的先序遍历序列； 第二行是二叉树的中序遍历序列； 第三行是二叉树的后序遍历序列； 第四行是叶子结点数；
////
////若是空二叉树 只需输出叶子数0
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType char 
//
//
//DateType a[100];
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
//BiTree create_tree(DateType* elem, int last)
//{
//	int i = 1;//下标从1开始
//	BiTree* node_array = (BiTree*)malloc(sizeof(BiTree) * (last + 1)); 
//	//存储所有节点的指针
//	BiTree root = (BiTNode*)malloc(sizeof(BiTNode));
//	root->data = elem[1];
//	node_array[1] = root; //构建根节点
//
//
//	for (i = 2; i <= last; i++) {
//		if (elem[i] == '#') 
//		{
//			node_array[i] = NULL;
//			continue;
//		}
//
//		BiTNode* p = (BiTNode*)malloc(sizeof(BiTNode));
//		p->data = elem[i];
//		p->Lchild = NULL;
//		p->Rchild = NULL;
//		node_array[i] = p;                                //新建一个节点
//
//		BiTNode* father_node = node_array[i / 2];
//		if (i % 2 == 0)
//			father_node->Lchild = p;
//		else
//			father_node->Rchild = p;                    //将其与父节点建立关联
//
//	}
//	free(node_array);
//	return root;
//}
//void PreOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		printf("%c", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//	else return;
//}
//void InOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%c", root->data);
//		InOrder(root->Rchild);
//	}
//	else return;
//}
//void PostOrder(BiTree root)//先序遍历
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%c", root->data);
//	}
//	else return;
//}
//void OutLeaf(BiTree root)//先序输出叶子节点
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%c\n", root->data);
//		OutLeaf(root->Lchild);//注意这里一定是调用自己，而不是调用preorder
//		OutLeaf(root->Rchild);
//	}
//	else return;
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
//	else return;
//}
//
//
//int main(void)
//{
//	//printf("#代表该节点为空\n");
//	int i = 1, j, Count = 0,last=0;
//	gets(&a[1]);
//	while (a[i++] != '\0') last++;
//	if (a[1] == '#')printf("0");
//	else
//	{
//		BiTree tree = NULL;
//		tree=create_tree(a,last);
//		PreOrder(tree);//先序遍历
//		printf("\n"); InOrder(tree);//中序遍历
//		printf("\n"); PostOrder(tree);//后序遍历
//		//printf("\n"); OutLeaf(tree);//先序输出叶子节点 
//		printf("\n"); LeafCount(tree, &Count); printf("%d\n", Count);//先序输出叶子节点
//	}
//
//	system("pause");
//	return 0;
//}