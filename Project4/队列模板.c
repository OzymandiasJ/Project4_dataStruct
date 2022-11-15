////链队列
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define QueueElementType int 
//#define true 1
//#define false 0
//typedef struct Node
//{
//	QueueElementType data;
//	struct Node* next;
//}LinkQueueNode;
//
//typedef struct
//{
//	LinkQueueNode* front; 
//	LinkQueueNode* rear;
//}LinkQueue;
//InitQueue(LinkQueue* Q);
//EnterQueue(LinkQueue* Q, QueueElementType x);
//int DeleteQueue(LinkQueue* Q, QueueElementType* x);//出队操作
//
//int  InitQueue(LinkQueue * Q)
//{//将Q初始化，并且带有头节点
//	Q->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));//头节点
//	if (Q->front != NULL)
//	{
//		Q->rear = Q->front;
//		Q->front->next = NULL;
//		return true;
//	}
//	else return false;
//}
//
//
//int EnterQueue(LinkQueue* Q, QueueElementType x)
//{
//	LinkQueueNode* NewNode;//NewNode为申请的新节点，Q为封装的结构体指针
//	NewNode = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//	if (NewNode != NULL)
//	{
//		NewNode->data = x;
//		NewNode->next = NULL;
//		Q->rear->next = NewNode;//将当前队尾指针指向新节点
//		Q->rear = NewNode;//将新节点设置为新的队尾节点
//		return true;
//	}
//	else return false;
//}
//
//int DeleteQueue(LinkQueue* Q, QueueElementType* x)//出队操作
//{//队头元素出队，且将其数据域赋给*x
//	if (Q->front == Q->rear) return false;
//	LinkQueueNode* p;
//	p = Q->front->next;
//	Q->front->next= Q->front->next->next;
//	*x =p->data;
//	free(p);
//	printf("%d",*x);
//	return true;
//}
//
//int main(void)
//{
//	int i, j, temp, x = 999;
//	LinkQueue* Q=(LinkQueue*)malloc(sizeof(LinkQueue));
//	InitQueue(Q);
//	EnterQueue(Q, x);
//	DeleteQueue(Q, &x);
//
//
//
//
//
//
//	return 0;
//}