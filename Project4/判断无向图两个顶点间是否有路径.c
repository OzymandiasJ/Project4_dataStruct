////onenote笔记有记录
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//#define MaxVertexNum 20   /* 最大顶点数设为20 */
//struct Graph {
//    int v;  // amount of vertices
//    int Adj[MaxVertexNum][MaxVertexNum]; /* 邻接矩阵 */
//};
//int visited[MaxVertexNum]; /* 顶点的访问标记 */
//struct Graph* CreateGraph() {
//    int v;
//    scanf("%d", &v);
//    struct Graph* g;
//    g = malloc(sizeof(struct Graph));
//    if (!g) return NULL;
//    g->v = v;
//    for (int i = 0; i < v; i++) {
//        visited[i] = 0;
//        for (int j = 0; j < v; j++)
//            scanf("%d", &(g->Adj[i][j]));
//    }
//    return g;
//}
//int hasPath(struct Graph* g, int v, int w);
//int main() {
//    struct Graph* g;
//    g = CreateGraph();
//    int v, w;
//    scanf("%d%d", &v, &w);
//    printf("%s\n", hasPath(g, v, w) ? "Yes" : "No");
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//int hasPath(struct Graph* g, int v, int w)
//{
//
//	int q[MaxVertexNum]; int front = 0, rear = 0;//队头在前端，队尾在后端
//	int v1 = 1, w1 = 1;//自身也算所在联通分量中的一个顶点，所以初始值为1
//	visited[v] = 1;
//	//printf(" %d", G->vertex[v]);
//	q[rear++] = v;//入队
//	while (front != rear)
//	{
//		int now = q[front++];//出队
//		for (int i = 0; i < g->v; i++)
//		{
//			if (g->Adj[now][i] == 1 && visited[i] == 0)
//			{
//				//printf(" %d", G->vertex[i]);
//				v1++;
//				visited[i] = 1;
//				q[rear++] = i;//入队
//			}
//		}
//	}
//	printf("%d\n", v1);
//
//
//
//	for (int i = 0; i < g->v; i++)visited[i] = 0;//重置访问标记数组
//	front = 0, rear = 0;//重置队列数组，重不重置无所谓
//	visited[w] = 1;
//	//printf(" %d", G->vertex[v]);
//	q[rear++] = w;//入队
//	while (front != rear)
//	{
//		int now = q[front++];//出队
//		for (int i = 0; i < g->v; i++)
//		{
//			if (g->Adj[now][i] == 1 && visited[i] == 0)
//			{
//				//printf(" %d", G->vertex[i]);
//				w1++;
//				visited[i] = 1;
//				q[rear++] = i;//入队
//			}
//		}
//	}
//	printf("%d\n", w1);
//
//	if (visited[v] == 1 && visited[w] == 1)
//		return 1;
//	else return 0;
//}