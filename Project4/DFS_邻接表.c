////�ڽӱ��ʾ��
////adjacency ���ڽӵ�
////onenote�ʼ��м�¼
////�����ڽӱ�������ͼG
////�����һ���и���2������i(0<i��10)��j(j��0)���ֱ�ΪͼG�Ķ������ͱ����� ����ڶ���Ϊ�������Ϣ��ÿ������ֻ����һ���ַ���ʾ�� 
////��������j�У�ÿ������һ���������Ķ��㡣
///*
//7 9
//0 3 4 1 2 5 6  
//0 4   
//0 2   
//3 2 
//0 3  
//3 1  
//4 5  
//6 5   
//2 5   
//1 5
//5
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 10//��ඥ����
//typedef int otherinfo;
//typedef int vertices;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//�ڽӻ��ؼ���Ϣ��ָ��Ķ�����ţ�
//	struct ArcNode* nextarc;//ָֻ����һ������ָ��
//
//}ArcNode;
//typedef struct 
//{
//	vertices data;
//	ArcNode* firstarc;
//}VNode,verticesNode;
//typedef struct
//{
//	verticesNode vertices[MAX_VERTEX_NUM];//������ͷ�ڵ��
//	int vexnum, arcnum; //������������
//	GraphyKind kind;
//}ALGraph;
//
//
//int CreateUDN(ALGraph* G);
//int Add_Adj_Node(ALGraph* G, int m, int n);//���ӽڵ㵽�ڽӱ�
//int LocateVex_M(ALGraph* G, vertices v);//�ҵ�v2��Ӧ�Ķ���������vertices�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//void print_G(ALGraph* G);//���ͼ���ڽӱ�
//void DFS(ALGraph* G, int i);
//
//int visited[MAX_VERTEX_NUM];/*�����־������Ϊȫ�ֱ���*/
//
//void DFS(ALGraph* G, int i)
//{
//
//	visited[i] = 1;
//	printf("%d", G->vertices[i].data);
//	ArcNode* p = G->vertices[i].firstarc;
//	while (p != NULL)
//	{
//				printf(" ");
//		if (!visited[p->adjvex]) DFS(G, p->adjvex);
//		p = p->nextarc;
//
//
//	}
//}
//int CreateUDN(ALGraph*G)//����ͼ
//{
//	int i, j, k, weight;
//	int m, n;
//	vertices v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//���붥����������;
//	//getchar();//���Ļس�
//	for (i = 0; i < G->vexnum; i++)
//	{
//		scanf("%d", &G->vertices[i].data);//�����ͷ�ڵ��
//		G->vertices[i].firstarc = NULL;
//	}
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%d %d",&v1,&v2);
//		m=LocateVex_M(G, v1);
//		n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, m, n);
//		Add_Adj_Node(G, n, m);//ע�⣬����ͼ��a��b��bҲҪ��a
//	}
//}
//int Count_Degree(ALGraph* G)//����ͼÿ���ڵ�Ķ�
//{
//	int i, j;
//	int sum[MAX_VERTEX_NUM] = {0};
//	ArcNode* temp = (verticesNode*)malloc(sizeof(verticesNode));
//	
//	for (i = 0; i < G->vexnum; i++)
//	{
//			temp = G->vertices[i].firstarc;
//			if (G->vertices[i].firstarc == NULL) {}
//			else 
//			{
//
//				while (1)//�������
//				{
//					sum[i]++;
//					temp = temp->nextarc;
//					if (temp == NULL) break;
//				}
//			}
//
//			for (j = 0; j < G->vexnum; j++)//�������
//			{
//				if (j == i)break;//�����ظ�����
//			
//				temp = G->vertices[j].firstarc;
//				if (temp== NULL)continue;
//				else
//				{
//					while (1)//�������
//					{
//						if (temp->adjvex == i)sum[i]++;
//						temp = temp->nextarc;
//						if (temp == NULL)break;
//					}
//				}
//			}
//	}
//	for (i = 0; i < G->vexnum;i++)printf("%d ",sum[i]);
//
//}
//
//
//
//int Add_Adj_Node(ALGraph* G, int m, int n)//���ӽڵ㵽�ڽӱ�
//{//v��ʾ�ڼ����ڵ㣬c��ʾҪ���ӵĽڵ�ؼ���ֵ
//	if (G->vertices[m].firstarc == NULL)
//	{
//		ArcNode* NewNode = (verticesNode*)malloc(sizeof(verticesNode));
//		NewNode->adjvex = n;
//		NewNode->nextarc = NULL;
//		G->vertices[m].firstarc = NewNode;
//	}
//	else
//	{
//		ArcNode* NewNode = (verticesNode*)malloc(sizeof(verticesNode));
//		ArcNode* temp = (verticesNode*)malloc(sizeof(verticesNode));
//		NewNode->adjvex = n;
//		temp = G->vertices[m].firstarc;
//		G->vertices[m].firstarc = NewNode;
//		NewNode->nextarc = temp;
//	}
//}
//int LocateVex_M(ALGraph* G, vertices v)//�ҵ�v2��Ӧ�Ķ���������vertices�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertices[i].data) return i;
//		else;
//	}
//
//}
//
//int main(void)
//{
//	int v;
//	ALGraph G;
//	CreateUDN(&G);
//	scanf("%d", &v);
//	printf("DFS from %d:", v);
//	DFS(&G, v);
//	return 0;
//}
