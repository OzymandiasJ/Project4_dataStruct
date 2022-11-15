//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
////#define ERROR 0
////#define OK 1
//#define ERROR -1
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//    ElementType Data;
//    PtrToNode   Next;
//};
//typedef PtrToNode List;//List其实是节点类型，不需要带*
//ElementType Find(List L, int m);
//List Read()//链表初始化_创建头节点 
//{
//    List HeadNode = (List*)malloc(sizeof(List));
//    if (HeadNode == NULL)
//    {
//        printf("空间缓存不足");
//        return HeadNode;
//    }
//    HeadNode->Data = 0;
//    HeadNode->Next = NULL;
//    return HeadNode;
//}
//void CreatList(List HeadNode, double* InData, int DataNum)//InData为要写入的数组，DataNum为该数组元素的多少
//{
//    int i = 0;
//    List CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->Data = InData[i];
//
//        if (i < DataNum - 1)// 由于每次赋值后需要新建结点，为了保证没有多余的废结点
//
//        {
//            CurrentNode->Next = (List*)malloc(sizeof(List));
//            CurrentNode = CurrentNode->Next;
//        }
//    }
//    CurrentNode->Next = NULL;
//    //末节点没有指向任何节点，倘若使其指向头节点，则可形成一个循环链表
//}
//
//int main(void)
//{
//    List L;
//    L = Read();
//    double a[10] = {1,2,3,4,5,6,7,8,9,10};//注意这里类型要和函数参数类型对应一致，否则会出错
//    CreatList(L,a,10);
//    int m;
//    scanf("%d", &m);
//    printf("%d\n", Find(L, m));
//    return 0;
//}
//ElementType Find(List L, int m)//L为头节点
//{
//    int num = 0; int i;
//    List CurrentNode = L;
//    while (CurrentNode != NULL)//获取链表长度num
//    {
//        CurrentNode = CurrentNode->Next;
//        num++;
//    }
//    CurrentNode = L;
//    for (i=0;i<num-m;i++)//将指针指向倒数第m个节点
//    {
//        CurrentNode = CurrentNode->Next;
//    }
//   return CurrentNode->Data;//输出倒数第m个节点
//
//}