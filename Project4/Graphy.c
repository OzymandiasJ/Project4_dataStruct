////邻接矩阵表示法
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20
//#define INFINITY 32768
//typedef char VertexData;
//typedef int AdjType;
//typedef int otherinfo;
////图的种类：DG表示有向图，DN表示有向网，UDG表示无向图，UDN表示无向网
//typedef enum {DG,DN,UDG,UDN}GraphyKind;
//typedef struct ArcNode
//{
//	AdjType adj;
//	otherinfo info;
//}ArcNode;
//typedef struct
//{
//	VertexData vertex[MAX_VERTEX_NUM];//顶点向量,存储顶点数据
//	ArcNode arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];//邻接矩阵，存储边，即顶点间的邻接关系
//	int vexnum, arcnum; //顶点数，边数
//	GraphyKind kind;
//
//}AdjMatrix;
//
////6 10   2 1 5   4 1 7   3 2 4    1 3 8    6 3 9    3 4 5     6 4 6     4 5 5    1 6 2     5 6 1
//
//int CreateDN(AdjMatrix* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d",&G->arcnum,&G->vexnum);//读入顶点数，边数;
//	for (i = 0; i < G->vexnum; i++)
//		for (j = 0; j < G->vexnum; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%c",&G->vertex[i]);//读入顶点
//	for (k = 0; k < G->arcnum; k++)//读入边的数据
//	{
//		scanf("%d %d %d",&v1,&v2,&weight);//读入边的两个顶点和权值，如果不需要权值则删除掉即可
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[i][j].adj = weight;
//	}
//	
//
//}
//int LocateVex_M(AdjMatrix* G, VertexData v)//找到v2对应的顶点数据在vertex数组中的序号i或j，对应的就是在图中的位置
//{
//	int i, j;
//	for (i = 0; i < G->arcnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else printf("ERROR,no such data!!!");
//	}
//
//}
//void print_G(AdjMatrix* G)
//{
//	int i, j;
//	for (i = 0; i < G->arcnum; i++)
//	{
//		for (j = 0; j < G->arcnum; j++)
//		{
//			if (G->arcs[i][j].adj == INFINITY)printf("  ");
//			else printf("%d", G->arcs[i][j].adj);
//		}
//		printf("\n");
//	}
//}
//int main(void)
//{
//	AdjMatrix* G =(AdjMatrix*)malloc(sizeof(AdjMatrix));
//	CreateDN(G);
//	print_G(G);
//
//
//
//
//
//
//
//
//	return 0;
//}