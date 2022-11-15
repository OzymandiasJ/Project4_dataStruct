////邻接表表示法
////adjacency ：邻接的
////onenote笔记有记录
////采用邻接表创建无向图G
////输入第一行中给出2个整数i(0<i≤10)，j(j≥0)，分别为图G的顶点数和边数。 输入第二行为顶点的信息，每个顶点只能用一个字符表示。 
////依次输入j行，每行输入一条边依附的顶点。
///*
//9 11
//1 2 3 4 5 6 7 8 9
//0 2
//0 7
//1 2
//1 3
//1 4
//2 3
//3 5
//3 6
//4 5
//7 8
//8 6
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define MAX_VERTEX_NUM 10//最多顶点数
//typedef int otherinfo;
//typedef int vertices;
//typedef enum { DG, DN, UDG, UDN }GraphyKind;
//typedef struct ArcNode
//{
//	int adjvex;//邻接弧关键信息（指向的顶点序号）
//	struct ArcNode* nextarc;//只指向下一条弧的指针
//
//}ArcNode;
//typedef struct 
//{
//	vertices data;
//	ArcNode* firstarc;
//}VNode,verticesNode;
//typedef struct
//{
//	verticesNode vertices[MAX_VERTEX_NUM];//创建表头节点表
//	int vexnum, arcnum; //顶点数，边数
//	GraphyKind kind;
//}ALGraph;
//
//
//int CreateDN(ALGraph* G);//有向图
//int Add_Adj_Node(ALGraph* G, int m, int n);//增加节点到邻接表
//int LocateVex_M(ALGraph* G, vertices v);//找到v2对应的顶点数据在vertices数组中的序号i或j，对应的就是在图中的位置
//void print_G(ALGraph* G);//输出图的邻接表
//void DFS(ALGraph* G, int i);
//
//int TopoSort(ALGraph* G)
//{
//	int q[MAX_VERTEX_NUM] ; int top = -1;//顺序栈
//	int indegree[MAX_VERTEX_NUM] = {0};
//	ArcNode* p;
//	for (int i = 0; i < G->vexnum; i++)//求各个顶点入度
//	{
//		p = G->vertices[i].firstarc;
//		while (p)
//		{
//			indegree[p->adjvex]++;
//			p = p->nextarc;
//		}
//	}
//	for (int i = 0; i < G->vexnum; i++)//将入度为0的顶点入栈
//	{
//		if (indegree[i] == 0) { top++; q[top] = i; }//入栈
//	}
//	int count = 0;//输出顶点数目计数器
//	int u;
//	while (top != -1)
//	{
//		u = q[top]; top--;
//		printf(" %d",G->vertices[u].data);
//		count++;
//		p = G->vertices[u].firstarc;
//		while (p)//顶点u的所有邻接点入度减一
//		{
//			indegree[p->adjvex]--;
//			if (indegree[p->adjvex] == 0) { top++; q[top] = p->adjvex;  }//入栈
//			p = p->nextarc;
//		}
//	}
//	printf("\ncount:%d",count);
//	if (count < G->vexnum)return 0;//有回路
//	else return 1;
//
//
//}
//int CreateDN(ALGraph*G)//无向图
//{
//	int i, j, k, weight;
//	int m, n;
//	vertices v1, v2;
//	scanf("%d %d", &G->vexnum, &G->arcnum);//读入顶点数，边数;
//	//getchar();//消耗回车
//	for (i = 0; i < G->vexnum; i++)
//	{
//		scanf("%d", &G->vertices[i].data);//读入表头节点表
//		G->vertices[i].firstarc = NULL;
//	}
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%d %d",&v1,&v2);
//		//m=LocateVex_M(G, v1);
//		//n = LocateVex_M(G, v2);
//		Add_Adj_Node(G, v1, v2);//直接对应下标，不需要调用locate函数
//		//Add_Adj_Node(G, n, m);//注意，无向图，a连b，b也要连a
//	}
//}
//
//
//int Add_Adj_Node(ALGraph* G, int m, int n)//增加节点到邻接表
//{//v表示第几个节点，c表示要增加的节点关键字值
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
//int LocateVex_M(ALGraph* G, vertices v)//找到v2对应的顶点数据在vertices数组中的序号i或j，对应的就是在图中的位置
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
//	CreateDN(&G);////有向图,AOV网
//	//scanf("%d", &v);
//	//printf("DFS from %d:", v);
//	//DFS(&G, v);
//	TopoSort(&G);
//	return 0;
// }
