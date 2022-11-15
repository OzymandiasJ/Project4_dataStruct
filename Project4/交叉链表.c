//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//typedef struct LinkList
//{
//    int data;
//    struct LinkList* next;//指向下一个节点的指针next
//}LinkList;
//
//void LinkListReverse(LinkList** HeadNode);
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2);//找到共同后缀
//LinkList* List_init();//链表初始化_创建头节点 
//void CreatList(LinkList* HeadNode, int* InData, int DataNum);//InData为要写入的数组，DataNum为该数组元素的多少
//
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
//void CreatList(LinkList* HeadNode, int* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
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
//    //printf("输出链表内容： ");
//    while (CurrentNode != NULL)
//    {
//        printf("%d ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//void qiu_jiao_ji(LinkList* HeadNode1, LinkList* HeadNode2)
//{
//    int num = 0;
//    //printf("输出链表交叉内容： ");
//    LinkList* CurrentNode = HeadNode1, * DynamicNode = HeadNode2;
//    while (CurrentNode->next != NULL)
//    {
//        while (DynamicNode->next != NULL)
//        {
//            if (DynamicNode->data == CurrentNode->data)
//            {
//                if (num > 0) printf(" ");
//                printf("%d ", CurrentNode->data); num++;
//            }
//            DynamicNode = DynamicNode->next;
//        }
//        CurrentNode = CurrentNode->next;
//        DynamicNode = HeadNode2;
//    }
//    if (num == 0)printf("NULL");
//
//}
//
//
//
//int main()
//{
//    int i=0, j=0;
//    int InData1[10] = {0};
//    do { scanf("%d", &InData1[i]); }while (InData1[i++] != -1);
//    int InData2[10] = {0};
//    do { scanf("%d", &InData2[j]); } while (InData2[j++] != -1);
//    int DataNum1 = 0, DataNum2 = 0;
//    while (InData1[DataNum1] != 0)DataNum1++;
//    while (InData2[DataNum2] != 0)DataNum2++;
//    LinkList* HeadNode1 = List_init();
//    LinkList* HeadNode2 = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode1, InData1, DataNum1);//创建链表
//    CreatList(HeadNode2, InData2, DataNum2);//创建链表
//    //printLinkList(HeadNode1);//输出链表内容
//    //printLinkList(HeadNode2);//输出链表内容
//    qiu_jiao_ji(HeadNode1, HeadNode2);
//
//    //system("pause");
//    return 0;
//
//}