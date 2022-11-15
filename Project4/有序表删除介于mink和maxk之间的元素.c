//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//#define ElementType int //注意修改ElementType时修改print函数输出格式
//定义节点，也可以使用class，class与struct的区别就是默认的访问权限不同
///*typedef struct LNode
//{
//    int Element ;
//    struct LNode* next;
//}LinkList*/;
//typedef struct LinkList
//{
//    ElementType data;
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
//void CreatList(LinkList* HeadNode, ElementType* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
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
//
//    while (CurrentNode != NULL)
//    {
//        printf("%d ", CurrentNode->data);//注意调用该函数时这里修改输出格式
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//int Delete_mink_maxk(LinkList* HeadNode, int mink, int maxk)//有序表删除介于mink和maxk之间的元素
//{
//    LinkList* CurrentNode = NULL;
//    LinkList* NodeToDelete, * Node_mink = HeadNode;//创建NodeToDelete是为了方便后续free这个节点
//    //将CurrentNode指向待删除位置的前一个结点（index -1）
//    while (Node_mink && (Node_mink->next->data <= mink))
//    {
//        Node_mink = Node_mink->next;
//    }//找到mink的直接前驱节点
//    CurrentNode= HeadNode;
//    while (CurrentNode->data<maxk)
//    {
//        NodeToDelete = Node_mink->next;
//        Node_mink->next = Node_mink->next->next;
//        free(NodeToDelete);
//        CurrentNode = Node_mink->next;
//    }
//
//    return OK;
//}
//
//
//
//int main()
//{
//    int i, j;
//    ElementType InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(ElementType);
//    LinkList* HeadNode = List_init();//初始化链表，返回当前节点指针
//    CreatList(HeadNode, InData, DataNum);//创建链表
//    printLinkList(HeadNode);//输出链表内容
//    Delete_mink_maxk(HeadNode, 1 , 4);//有序表删除介于mink和maxk(整数)之间的元素
//    printLinkList(HeadNode);//奇数在前偶数在后
//
//
//
//    //DeleteList_ik(HeadNode, 3 , 3 ); printLinkList(HeadNode);//删除节点并再次输出
//    system("pause");
//    return 0;
//
//}
