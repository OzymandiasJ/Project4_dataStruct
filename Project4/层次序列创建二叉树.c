////���ڸ����Ķ�������������������С��������С��������в����Ҷ�ӽ������
////
////�����ʽ :
////�������Ĳ�����С�
////
////��ʾ��һ�ö������Ĳ��������һ���ַ��������ַ��ǡ�#��, ��ʾ�ö������ǿ�����������ַ�����Ӧ��������Ԫ�ء�
////
////�����ʽ :
////���Ƿǿն�������������������� ��һ���Ƕ�����������������У� �ڶ����Ƕ�����������������У� �������Ƕ������ĺ���������У� ��������Ҷ�ӽ������
////
////���ǿն����� ֻ�����Ҷ����0
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define DateType char 
//
//
//DateType a[100];
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
//BiTree create_tree(DateType* elem, int last)
//{
//	int i = 1;//�±��1��ʼ
//	BiTree* node_array = (BiTree*)malloc(sizeof(BiTree) * (last + 1)); 
//	//�洢���нڵ��ָ��
//	BiTree root = (BiTNode*)malloc(sizeof(BiTNode));
//	root->data = elem[1];
//	node_array[1] = root; //�������ڵ�
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
//		node_array[i] = p;                                //�½�һ���ڵ�
//
//		BiTNode* father_node = node_array[i / 2];
//		if (i % 2 == 0)
//			father_node->Lchild = p;
//		else
//			father_node->Rchild = p;                    //�����븸�ڵ㽨������
//
//	}
//	free(node_array);
//	return root;
//}
//void PreOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		printf("%c", root->data);
//		PreOrder(root->Lchild);
//		PreOrder(root->Rchild);
//	}
//	else return;
//}
//void InOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		InOrder(root->Lchild);
//		printf("%c", root->data);
//		InOrder(root->Rchild);
//	}
//	else return;
//}
//void PostOrder(BiTree root)//�������
//{
//	if (root != NULL)
//	{
//		PostOrder(root->Lchild);
//		PostOrder(root->Rchild);
//		printf("%c", root->data);
//	}
//	else return;
//}
//void OutLeaf(BiTree root)//�������Ҷ�ӽڵ�
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			printf("%c\n", root->data);
//		OutLeaf(root->Lchild);//ע������һ���ǵ����Լ��������ǵ���preorder
//		OutLeaf(root->Rchild);
//	}
//	else return;
//}
//void LeafCount(BiTree root, int* Count)//���Ҷ�ӽڵ���Ŀ
//{
//	if (root != NULL)
//	{
//		if ((root->Lchild == NULL) && (root->Rchild == NULL))
//			(*Count)++;//ע��++��������ȼ�����*
//		LeafCount(root->Lchild, Count);//ע������һ���ǵ����Լ��������ǵ���preorder
//		LeafCount(root->Rchild, Count);
//	}
//	else return;
//}
//
//
//int main(void)
//{
//	//printf("#����ýڵ�Ϊ��\n");
//	int i = 1, j, Count = 0,last=0;
//	gets(&a[1]);
//	while (a[i++] != '\0') last++;
//	if (a[1] == '#')printf("0");
//	else
//	{
//		BiTree tree = NULL;
//		tree=create_tree(a,last);
//		PreOrder(tree);//�������
//		printf("\n"); InOrder(tree);//�������
//		printf("\n"); PostOrder(tree);//�������
//		//printf("\n"); OutLeaf(tree);//�������Ҷ�ӽڵ� 
//		printf("\n"); LeafCount(tree, &Count); printf("%d\n", Count);//�������Ҷ�ӽڵ�
//	}
//
//	system("pause");
//	return 0;
//}