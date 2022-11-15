//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//typedef struct LinkList
//{
//    char data;
//    struct LinkList* next;//指向下一个节点的指针next
//}LinkList;
//
//void LinkListReverse(LinkList** HeadNode);
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2);//找到共同后缀
//LinkList* List_init();//链表初始化_创建头节点 
//void CreatList(LinkList* HeadNode, char* InData, int DataNum);//InData为要写入的数组，DataNum为该数组元素的多少
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
//void CreatList(LinkList* HeadNode, char* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
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
//        printf("%c", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//void LinkListReverse(LinkList** HeadNode)//修改原链表头指针，所以传递二级指针
//{                                                                   
//    LinkList* temp ;
//    LinkList* CurrentNode = NULL; 
//    while (*HeadNode)
//    {
//        temp = *HeadNode;//记住当前头节点位置
//        *HeadNode = (*HeadNode)->next;//头节点依次向后移动，更新头节点，注意运算符优先级
//        temp->next= CurrentNode;//将旧头节点指针域指向前面节点
//        CurrentNode = temp;//更新当前节点
//    }
//    *HeadNode = CurrentNode;
//}
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2)//找到共同后缀
//{
//    
//    LinkList* L = List_init();//新链表
//    L->next = NULL;
//    //LinkListReverse( &HeadNode1);//先反转链表
//    LinkList* temp1;
//    LinkList* CurrentNode1 = NULL;
//    while (HeadNode1)
//    {
//        temp1 = HeadNode1;//记住当前头节点位置
//        HeadNode1 = (HeadNode1)->next;//头节点依次向后移动，更新头节点，注意运算符优先级
//        temp1->next = CurrentNode1;//将旧头节点指针域指向前面节点
//        CurrentNode1 = temp1;//更新当前节点
//    }
//    HeadNode1 = CurrentNode1;
//    //LinkListReverse( &HeadNode1);//先反转链表
//
//
//    //LinkListReverse( &HeadNode2);//先反转链表
//    LinkList* temp2;
//    LinkList* CurrentNode2 = NULL;
//    while (HeadNode2)
//    {
//        temp2 = HeadNode2;//记住当前头节点位置
//        HeadNode2 = (HeadNode2)->next;//头节点依次向后移动，更新头节点，注意运算符优先级
//        temp2->next = CurrentNode2;//将旧头节点指针域指向前面节点
//        CurrentNode2 = temp2;//更新当前节点
//    }
//    HeadNode2 = CurrentNode2;
//    //LinkListReverse( &HeadNode2);//先反转链表
//
//
//    printLinkList(HeadNode1); printLinkList(HeadNode2);
//    LinkList* CurrentNode11 = HeadNode1;
//    LinkList* CurrentNode22 = HeadNode2;\
//        while (CurrentNode11->data == CurrentNode22->data)
//        {
//            LinkList* newnode = (LinkList*)malloc(sizeof(LinkList));
//            newnode->data = CurrentNode11->data;
//            newnode->next=L->next;
//            L->next = newnode;
//            CurrentNode11 = CurrentNode11->next;
//            CurrentNode22 = CurrentNode22->next;
//        }
//    LinkList* CurrentNode = L;
//    //printf("输出链表内容： ");
//    while (CurrentNode != NULL)
//    {
//        printf("%c", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//}
//
//
//int main()
//{
//    int i, j;
//    char InData1[10] = "being";
//    char InData2[10] = "loading";
//    int DataNum1=0, DataNum2 = 0;
//    while (InData1[DataNum1] != '\0')DataNum1++;
//    while (InData2[DataNum2] != '\0')DataNum2++;
//    LinkList* HeadNode1 = List_init();//初始化链表，返回当前节点指针
//    LinkList* HeadNode2 = List_init();
//    CreatList(HeadNode1, InData1, DataNum1);//
//    CreatList(HeadNode2, InData2, DataNum2);//创建链表
//    printLinkList(HeadNode1);//输出链表内容
//    printLinkList(HeadNode2);//输出链表内容
//    commen_houzhui(HeadNode1, HeadNode2);
//    //printLinkList(L);//输出链表内容
//
//
//	//system("pause");
//	return 0;
//
//}