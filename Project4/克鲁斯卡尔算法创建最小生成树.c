////�ڽӱ��ʾ��
////adjacency ���ڽӵ�
//
////�����ڽӱ�������ͼG
////�����һ���и���2������i(0<i��10)��j(j��0)���ֱ�ΪͼG�Ķ������ͱ����� ����ڶ���Ϊ�������Ϣ��ÿ������ֻ����һ���ַ���ʾ�� 
////��������j�У�ÿ������һ���������Ķ��㡣
///*
//5 7
//ABCDE
//AB
//AD
//BC
//BE
//CD
//CE
//DE
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20//��ඥ����
//typedef int otherinfo;
//typedef char VertexData;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//�ڽӻ��ؼ���Ϣ��ָ��Ķ�����ţ�
//	struct ArcNode* nextarc;//ָֻ����һ������ָ��
//	otherinfo info;
//}ArcNode;
//typedef struct
//{
//	VertexData data;
//	ArcNode* firstarc;
//}VertexNode;
//typedef struct
//{
//	VertexNode vertex[MAX_VERTEX_NUM];//������ͷ�ڵ��
//	int vexnum, arcnum; //������������
//	GraphyKind kind;
//}AdjList;
//
//
//int CreateUDN(AdjList* G);
//int Add_Adj_Node(AdjList* G, int m, int n);//���ӽڵ㵽�ڽӱ�
//int LocateVex_M(AdjList* G, VertexData v);//�ҵ�v2��Ӧ�Ķ���������vertex�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//void print_G(AdjList* G);//���ͼ���ڽӱ�
//
//
//
//int CreateUDN(AdjList* G)
//{
//	int i, j, k, weight;
//	int m, n;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//���붥����������;
//	getchar();//���Ļس�
//	for (i = 0; i < G->vexnum; i++)
//	{
//		scanf("%c", &G->vertex[i].data);//�����ͷ�ڵ��
//		G->vertex[i].firstarc = NULL;
//	}
//	getchar();//���Ļس�
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%c%c", &v1, &v2);
//		getchar();//���Ļس�
//		m = LocateVex_M(G, v1);
//		n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, m, n);
//	}
//}
//
//int Add_Adj_Node(AdjList* G, int m, int n)//���ӽڵ㵽�ڽӱ�
//{//v��ʾ�ڼ����ڵ㣬c��ʾҪ���ӵĽڵ�ؼ���ֵ
//	if (G->vertex[m].firstarc == NULL)
//	{
//		ArcNode* NewNode = (VertexNode*)malloc(sizeof(VertexNode));
//		NewNode->adjvex = n;
//		NewNode->nextarc = NULL;
//		G->vertex[m].firstarc = NewNode;
//	}
//	else
//	{
//		ArcNode* NewNode = (VertexNode*)malloc(sizeof(VertexNode));
//		ArcNode* temp = (VertexNode*)malloc(sizeof(VertexNode));
//		NewNode->adjvex = n;
//		temp = G->vertex[m].firstarc;
//		G->vertex[m].firstarc = NewNode;
//		NewNode->nextarc = temp;
//	}
//}
//int LocateVex_M(AdjList* G, VertexData v)//�ҵ�v2��Ӧ�Ķ���������vertex�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i].data) return i;
//		else;
//	}
//
//}
//// Kruskal�㷨������С������
//void MiniSpanTree_Kruskal(AdjList* G)
//{
//	int i, n, m;
//	Edge edges[MAGEDGE]; // ����߼�����
//	int parent[MAXVEX];  // ����parent���������жϱ�����Ƿ��γɻ�·
//	int eCount = 0;
//	for (i = 0; i < G.numVertexes; i++)
//	{
//		parent[i] = 0;
//	}
//
//	for (i = 0; i < G.numEdges; i++)
//	{
//		n = Find(parent, edges[i].begin); // 4 2 0 1 5 3 8 6 6 6 7
//		m = Find(parent, edges[i].end);  // 7 8 1 5 8 7 6 6 6 7 7
//
//		if (n != m)  // ���n==m�����γɻ�·�������㣡
//		{
//
//			parent[n] = m; // ���˱ߵĽ�β��������±�Ϊ����parent�����У���ʾ�˶����Ѿ���������������
//			printf("(%d, %d) %d ", edges[i].begin, edges[i].end, edges[i].weight);
//			++eCount;
//			if (eCount == (G.numVertexes - 1)) {
//				break;
//			}
//		}
//	}
//}
//int Find(int* parent, int f)
//{
//	while (parent[f] > 0)
//	{
//		f = parent[f];
//	}
//
//	return f;
//}
//
//int main(void)
//{
//	AdjList* G = (AdjList*)malloc(sizeof(AdjList));
//	CreateUDN(G);
//	printf("����ڽӱ�\n");
//	print_G(G);
//	return 0;
//}