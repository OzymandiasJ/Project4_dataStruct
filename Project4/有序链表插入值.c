//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//struct Node {
//    double data; /* 存储结点数据 */
//    struct Node* next; /* 指向下一个结点的指针 */
//};
//typedef struct Node* LinkList; /* 定义单链表类型 */
// //LinkList为指针类型
//LinkList List_init()//链表初始化_创建头节点 
//{
//    LinkList HeadNode = (LinkList)malloc(sizeof(LinkList));
//    if (HeadNode == NULL)
//    {
//        printf("空间缓存不足");
//        return HeadNode;
//    }
//    HeadNode->data = 0;
//    HeadNode->next = NULL;
//    return HeadNode;
//}
//void CreatList(LinkList HeadNode, double* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
//{
//    int i = 0;
//    LinkList CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//
//        if (i < DataNum - 1)// 由于每次赋值后需要新建结点，为了保证没有多余的废结点
//
//        {
//            CurrentNode->next = (LinkList)malloc(sizeof(LinkList));
//            CurrentNode = CurrentNode->next;
//        }
//    }
//    CurrentNode->next = NULL;
//    //末节点没有指向任何节点，倘若使其指向头节点，则可形成一个循环链表
//}
//void AddNode_kepeOrdered(LinkList HeadNode,double k)//插入元素K到顺序表HeadNode且保持有序
//{
//    int i, j;
//    LinkList CurrentNode = HeadNode;
//    while (CurrentNode->next->data < k) CurrentNode = CurrentNode->next;
//    LinkList NodeToInsert = (LinkList)malloc(sizeof(LinkList));//为要插入的节点申请空间
//    if (NodeToInsert == NULL)
//    {
//        printf("空间缓存不足");
//        return -1;
//    } 
//    NodeToInsert->data = k;
//    NodeToInsert->next = CurrentNode->next;//更改指针域
//    CurrentNode->next = NodeToInsert;//更改指针域
//    return 0;
//
//}
//void printLinkList(LinkList HeadNode)//输出链表内容
//{
//    LinkList CurrentNode= HeadNode;
//    printf("输出链表内容： ");
//    while(CurrentNode!=NULL)
//    {
//        printf("%.lf ", CurrentNode->data);//这里可以控制输出格式
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//int main(void)
//{
//    int i, j;
//    double k = 5;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(double);
//    LinkList HeadNode = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode, InData, DataNum); printLinkList(HeadNode);//创建链表
//    AddNode_kepeOrdered(HeadNode ,k); printLinkList(HeadNode);
//	system("pause");
//	return 0;
//}