//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
////定义节点，也可以使用class，class与struct的区别就是默认的访问权限不同
//
//typedef struct LinkList
//{
//    double data;
//	struct LinkList* next;//指向下一个节点的指针next
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
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//        if (i < DataNum - 1)// 由于每次赋值后需要新建结点，为了保证没有多余的废结点
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
//    LinkList* CurrentNode= HeadNode;
//    printf("输出链表内容： ");
//    while(CurrentNode!=NULL)
//    {
//        printf("%.lf ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//int InsertList(LinkList* HeadNode, int LocateIndex, int InData)//插入节点
//{
//    int i = 1;// 由于起始结点HeadNode是头结点，所以计数从1开始
//    LinkList* CurrentNode = HeadNode;
//    //将CurrentNode指向待插入位置的前一个结点（index -1）
//    while (CurrentNode && i < LocateIndex - 1)
//    {
//        CurrentNode = CurrentNode->next;
//        i++;
//    }//找到要操作的节点的直接前驱节点
//    LinkList* NodeToInsert = (LinkList*)malloc(sizeof(LinkList));//为要插入的节点申请空间
//    if (NodeToInsert == NULL)
//    {
//        printf("空间缓存不足");
//        return ERROR;
//    }
//    NodeToInsert->data = InData;
//    NodeToInsert->next = CurrentNode->next;//更改指针域
//    CurrentNode->next = NodeToInsert;//更改指针域
//    return OK;
//}
//
//int DeleteList(LinkList* HeadNode, int index)
//{
//    int i = 1;
//    LinkList* CurrentNode = HeadNode;//创建CurrentNode是为了方便后续free这个节点
//    LinkList* NodeToDelete;
//    //将CurrentNode指向待删除位置的前一个结点（index -1）
//    while (CurrentNode && i < index - 1)
//    {
//        CurrentNode = CurrentNode->next;
//        i++;
//    }//找到要操作的节点的直接前驱节点
//    NodeToDelete = CurrentNode->next;//将NodeToDelete指向待删除的节点
//    CurrentNode->next = NodeToDelete->next;//将该结点的后置结点链接到前置结点的next指针处
//    free(NodeToDelete);//释放掉已删除节点的空间
//    return OK;
//}
//
//int GetListLength(LinkList* HeadNode)
//{
//    int num = 0;
//    LinkList* CurrentNode = HeadNode;
//    while (CurrentNode != NULL)
//    {
//        CurrentNode = CurrentNode->next;
//        num++;
//    }
//    printf("链表长度为: %d\n", num);
//    return num ;
//}
//int DestroyList(LinkList* HeadNode)//链表销毁
//{
//    LinkList* pNext;
//    LinkList* CurrentNode = (LinkList*)HeadNode;
//    while (CurrentNode)
//    {
//        pNext = CurrentNode->next;
//        free(CurrentNode);
//        CurrentNode = pNext;
//    }
//
//    HeadNode->next = NULL;
//
//    return OK;
//
//}
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData)/sizeof(double);
//    LinkList* HeadNode = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode, InData, DataNum);//创建链表
//    printLinkList(HeadNode);//输出链表内容
//    InsertList(HeadNode, 3, 999); printLinkList(HeadNode);//插入节点并再次输出
//    GetListLength(HeadNode);//获取链表长度并输出
//    DeleteList(HeadNode, 3); printLinkList(HeadNode);//删除节点并再次输出
//    GetListLength(HeadNode);//获取链表长度并输出
//
//
//
//
//
//
//    DestroyList(HeadNode);//链表销毁
//	system("pause");
//	return 0;
//
//}
