////本题要求输出前来等待服务的N位顾客的平均等待时间、
////最长等待时间、最后完成时间，并且统计每个窗口服务了多少名顾客。
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
//
//int  InitQueue(LinkQueue * Q[])
//{//将Q初始化，并且带有头节点
//	int i;
//	for (i = 0; i < 1; i++)
//	{
//		Q[i]->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));//头节点
//		Q[i]->rear = Q[i]->front;
//		Q[i]->front->next = NULL;
//		return true;
//	}
//}
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
//	int i, j, temp ;
//	LinkQueue* Q[10];
//	InitQueue(Q);
//	int custmersnum, winnum;
//	scanf("%d",&custmersnum);
//	int a[1000][2] = {0};
//	for (i = 0; i < custmersnum; i++)scanf("%d %d",&a[i][0],& a[i][1]);
//	scanf("%d",&winnum);//到这里读完数据
//	int AveWaitTime, FinalTime, ServeNum[10];
//	for (i = 0; i < custmersnum; i++)
//	/*{
//	if()
//	
//	
//	}*/
//
//
//
//
//	return 0;
//}