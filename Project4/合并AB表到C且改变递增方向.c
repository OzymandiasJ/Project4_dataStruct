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
//
//
//
//
//
//void ListOppose(LinkList* L)
//{   // 将带表头节点的单链表逆置
//    LinkList *q, *p ;
//    p = L;
//    p = L->next;
//    L->next = NULL;
//    while (p)
//    {
//        q = p;
//        p = p->next;
//        q->next = L->next;
//        L->next = q;
//    }
//    return OK;
//}
//
//void ListMerge(LinkList* A, LinkList* B, LinkList* C)
//{   // 合并两个递增单链表 A, B 成一个递增有序单链表 C
//    LinkList *qa, *pa, *pb, *qb;
//    pa = A;  qa = pa;   pa = pa->next;
//    pb = B->next;
//    C = A;
//    while (pa && pb)
//    {
//        if (pa->data <= pb->data)  // 当 pa 的值 小于等于 pb 的值的时候，将 pb 插入到 pa 的                    
//                                  // 前边
//        {
//            qb = pb;       // qb 为待插入节点
//            pb = pb->next;    // pb 后移，为以后的插入做准备
//            qb->next = qa->next;    // 本行和下一行代码做插入操作
//            qa->next = qb;
//            qa = qa->next;    // qa 后移，为以后的插入做准备
//        }
//        else // pa 的值大于 pb 的值
//        {
//            if (pa->data == pa->next->data) pa = pa->next;  // pa 的值和 pa 直接后继节点的 
//                                                           // 值相等，pa 向后移        
//
//            qb = pb;                    // qb 为待插入节点
//            pb = pb->next;
//            qb->next = pa->next;      // 本行和下一行代码做插入操作 
//            pa->next = qb;
//            pa = pa->next;            // pa 后移，为以后的插入做准备
//        }
//    }
//    free(B);    // 释放 B 链表的头结点
//
//    return OK;
//}//ListMerge
//
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData)/sizeof(double);
//    LinkList* HeadNode1 = List_init(), * HeadNode2 = List_init(), *HeadNode3 = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode1, InData, DataNum);//创建链表
//    CreatList(HeadNode2, InData, DataNum);
//    CreatList(HeadNode3, InData, DataNum);
//    printLinkList(HeadNode1);//输出链表内容
//    printLinkList(HeadNode2);//输出链表内容
//    ListOppose(HeadNode1);
//    ListOppose(HeadNode2);
//    printLinkList(HeadNode1);//输出链表内容
//    printLinkList(HeadNode2);//输出链表内容
//    ListMerge(&HeadNode1, &HeadNode2, &HeadNode3);
//    printLinkList(HeadNode3);//输出链表内容
//	system("pause");
//	return 0;
//
//}
