////����Ҫ�����ǰ���ȴ������Nλ�˿͵�ƽ���ȴ�ʱ�䡢
////��ȴ�ʱ�䡢������ʱ�䣬����ͳ��ÿ�����ڷ����˶������˿͡�
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
//{//��Q��ʼ�������Ҵ���ͷ�ڵ�
//	int i;
//	for (i = 0; i < 1; i++)
//	{
//		Q[i]->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));//ͷ�ڵ�
//		Q[i]->rear = Q[i]->front;
//		Q[i]->front->next = NULL;
//		return true;
//	}
//}
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
//	int i, j, temp ;
//	LinkQueue* Q[10];
//	InitQueue(Q);
//	int custmersnum, winnum;
//	scanf("%d",&custmersnum);
//	int a[1000][2] = {0};
//	for (i = 0; i < custmersnum; i++)scanf("%d %d",&a[i][0],& a[i][1]);
//	scanf("%d",&winnum);//�������������
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