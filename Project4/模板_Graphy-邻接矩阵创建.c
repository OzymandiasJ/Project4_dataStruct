////邻接矩阵表示法创建有向图
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 20
//#define INFINITY 32768
//typedef int VertexData;
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
//}AdjMatrix;
//
////6 10  1 2 3 4 5 6   2 1 5   4 1 7   3 2 4    1 3 8    6 3 9    3 4 5     6 4 6     4 5 5    1 6 2     5 6 1
//int CreateDN(AdjMatrix* G)
//{
//	int i, j, k, weight;
//	VertexData v1, v2;
//	scanf("%d %d", &G->vexnum ,&G->arcnum);//读入顶点数，边数;
//	for (i = 0; i < MAX_VERTEX_NUM; i++)
//		for (j = 0; j < MAX_VERTEX_NUM; j++)
//			G->arcs[i][j].adj = INFINITY;
//	for (i = 0; i < G->vexnum; i++)
//		scanf("%d",&G->vertex[i]);//读入顶点
//	for (k = 0; k < G->arcnum; k++)//读入边的数据
//	{
//		scanf("%d %d %d",&v1,&v2,&weight);//读入边的两个顶点和权值，如果不需要权值则删除掉即可
//		i = LocateVex_M(G,v1);
//		j = LocateVex_M(G, v2);
//		G->arcs[j][i].adj = weight;
//	}
//	
//
//}
//int LocateVex_M(AdjMatrix* G, VertexData v)//找到v2对应的顶点数据在vertex数组中的序号i或j，对应的就是在图中的位置
//{
//	int i, j;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (v == G->vertex[i]) return i;
//		else ;
//	}
//
//}
//void print_G(AdjMatrix* G)//输出图的邻接矩阵
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