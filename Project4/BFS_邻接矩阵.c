////�ڽӾ����ʾ����������ͼ
// //onenote�ʼ��м�¼
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MaxVertexNum 20
//#define INFINITY 32768
//typedef int VertexData;
//typedef int AdjType;
//typedef int otherinfo;
//typedef int Vertex;/* �ö����±��ʾ����,Ϊ���� */
////ͼ�����ࣺDG��ʾ����ͼ��DN��ʾ��������UDG��ʾ����ͼ��UDN��ʾ������
//typedef enum {DG,DN,UDG,UDN}GraphyKind;
//typedef struct ArcNode
//{
//	AdjType adj;
//	otherinfo info;
//}ArcNode;
//typedef struct
//{
//	VertexData vertex[MaxVertexNum];//��������,�洢��������
//	ArcNode arcs[MaxVertexNum][MaxVertexNum];//�ڽӾ��󣬴洢�ߣ����������ڽӹ�ϵ
//	int vexnum, arcnum; //������������
//	GraphyKind kind;
//}MGraph;
//int visited[MaxVertexNum]; /* ����ķ��ʱ�� */
///*
//* //0 3 4 1 2 5 666����ڵ�ֵ��
////�����һ��һ��ֵ�����б������������ڵ��ֵ
////����Ҫ�����±��Ӧ���룬�������һ��һ��ֵ����
////�б������������ڵ�Ķ�Ӧ�±����ȷ����Щ��ֵ��
////�±귶Χ���⣬����Ҫ�޸�DFS����BFS�е�printf���:
////��printf(" %d", G->vertex[v]);�޸�Ϊ��printf(" %d",v);
////��printf(" %d", G->vertex[i]);�޸�Ϊ��printf(" %d",i);
//7 9
//0 3 4 1 2 5 666
//0 4
//0 2
//3 2
//0 3
//3 1
//4 5
//666 5
//2 5
//1 5
//5
//*/
//int CreateDN(MGraph* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum ,&G->arcnum);//���붥����������;
//	for (i = 0; i < MaxVertexNum; i++)
//		for (j = 0; j < MaxVertexNum; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%d",&G->vertex[i]);//���붥��
//	for (k = 0; k < G->arcnum; k++)//����ߵ�����
//	{
//		scanf("%d %d",&v1,&v2);//����ߵ����������Ȩֵ���������ҪȨֵ��ɾ��������
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[j][i].adj = 1;
//		G->arcs[i][j].adj = 1;//ע�⣬����ͼ��a��b��bҲҪ��a
//	}
//	for (i = 0; i < MaxVertexNum; i++)visited[i] = 0;
//}
//void BFS(MGraph* G, Vertex v)//BFS���������������
//{
//	int q[MaxVertexNum]; int front = 0, rear = 0;//��ͷ��ǰ�ˣ���β�ں��
//	visited[v]=1;
//	printf(" %d", G->vertex[v]);
//	q[rear++] = v;//���
//	while (front != rear)
//	{
//		int now = q[front++];//����
//		for (int i = 0; i < G->vexnum; i++)
//		{
//			if (G->arcs[now][i].adj == 1 && visited[i] == 0)
//			{
//				printf(" %d", G->vertex[i]);
//				visited[i] = 1;
//				q[rear++] = i;//���
//			}
//		
//		
//		}
//	
//	
//	
//	}
//
//
//
//}
//int LocateVex_M(MGraph* G, VertexData v)//�ҵ�v2��Ӧ�Ķ���������vertex�����е����i��j����Ӧ�ľ�����ͼ�е�λ��
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else ;
//	}
//
//}
//void print_G(MGraph* G)//���ͼ���ڽӾ���
//{
//	int i, j;
//	printf(" ");
//	for (i = 0; i < G->vexnum; i++)printf("--");
//	printf("\n");
//	for (i = 0; i < G->vexnum; i++)
//	{
//		printf("|");
//		for (j = 0; j < G->vexnum; j++)
//		{
//			if (G->arcs[i][j].adj >= INFINITY)printf("  ");
//			else printf("%d ", G->arcs[i][j].adj);
//		}
//		printf("|");
//		printf("\n");
//	}
//	printf(" ");
//	for (i = 0; i < G->vexnum; i++)printf("--");
//}
//int main()
//{
//	Vertex v;
//	MGraph G;
//	CreateDN(&G);
//	scanf("%d", &v);
//	printf("BFS from %d:", v);
//	BFS(&G, v);
//	return 0;
//}