////������
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
//int DeleteQueue(LinkQueue* Q, QueueElementType* x);//���Ӳ���
//
//int  InitQueue(LinkQueue * Q)
//{//��Q��ʼ�������Ҵ���ͷ�ڵ�
//	Q->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));//ͷ�ڵ�
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
//	LinkQueueNode* NewNode;//NewNodeΪ������½ڵ㣬QΪ��װ�Ľṹ��ָ��
//	NewNode = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//	if (NewNode != NULL)
//	{
//		NewNode->data = x;
//		NewNode->next = NULL;
//		Q->rear->next = NewNode;//����ǰ��βָ��ָ���½ڵ�
//		Q->rear = NewNode;//���½ڵ�����Ϊ�µĶ�β�ڵ�
//		return true;
//	}
//	else return false;
//}
//
//int DeleteQueue(LinkQueue* Q, QueueElementType* x)//���Ӳ���
//{//��ͷԪ�س��ӣ��ҽ��������򸳸�*x
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