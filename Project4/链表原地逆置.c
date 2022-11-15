//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//定义节点，也可以使用class，class与struct的区别就是默认的访问权限不同
///*typedef struct LNode
//{
//    int Element ;
//    struct LNode* next;
//}LinkList*/;
//typedef struct LinkList
//{
//    double data;
//    struct LinkList* next;//指向下一个节点的指针next
//}LinkList;
//
//LinkList* List_init()//链表初始化_创建头节点 
//{
//    LinkList* HeadNode = (LinkList*)malloc(sizeof(LinkList));
//    if (HeadNode == NULL)
//    {
//        printf("空间缓存不足");
//        return HeadNode;
//    }
//    HeadNode->data = 0;
//    HeadNode->next = NULL;
//    return HeadNode;
//}
//
//void CreatList(LinkList* HeadNode, double* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
//{
//    int i = 0;
//    LinkList* CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//
//        if (i < DataNum - 1)// 由于每次赋值后需要新建结点，为了保证没有多余的废结点
//
//        {
//            CurrentNode->next = (LinkList*)malloc(sizeof(LinkList));
//            CurrentNode = CurrentNode->next;
//        }
//    }
//    CurrentNode->next = NULL;
//    //末节点没有指向任何节点，倘若使其指向头节点，则可形成一个循环链表
//}
//void printLinkList(LinkList* HeadNode)//输出链表内容
//{
//    LinkList* CurrentNode = HeadNode;
//    printf("输出链表内容： ");
//    while (CurrentNode != NULL)
//    {
//        printf("%.lf ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//void LinkListReverse(LinkList** HeadNode)//修改原链表头指针，所以传递二级指针
//{
//    LinkList* temp;
//    LinkList* CurrentNode = NULL;
//    while (*HeadNode)
//    {
//        temp = *HeadNode;//记住当前头节点位置
//        *HeadNode = (*HeadNode)->next;//头节点依次向后移动，更新头节点，注意运算符优先级
//        temp->next = CurrentNode;//将旧头节点指针域指向前面节点
//        CurrentNode = temp;//更新当前节点
//    }
//    *HeadNode = CurrentNode;
//}
//
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(double);
//    LinkList* HeadNode = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode, InData, DataNum);//创建链表
//    printLinkList(HeadNode);//输出链表内容
//    LinkListReverse(&HeadNode);//链表原地逆置
//    printLinkList(HeadNode);//输出链表内容
//
//    system("pause");
//    return 0;
//
//}