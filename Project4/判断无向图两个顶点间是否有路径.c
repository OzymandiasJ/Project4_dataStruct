////onenote�ʼ��м�¼
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//#define MaxVertexNum 20   /* ��󶥵�����Ϊ20 */
//struct Graph {
//    int v;  // amount of vertices
//    int Adj[MaxVertexNum][MaxVertexNum]; /* �ڽӾ��� */
//};
//int visited[MaxVertexNum]; /* ����ķ��ʱ�� */
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
///* ��Ĵ��뽫��Ƕ������ */
//int hasPath(struct Graph* g, int v, int w)
//{
//
//	int q[MaxVertexNum]; int front = 0, rear = 0;//��ͷ��ǰ�ˣ���β�ں��
//	int v1 = 1, w1 = 1;//����Ҳ��������ͨ�����е�һ�����㣬���Գ�ʼֵΪ1
//	visited[v] = 1;
//	//printf(" %d", G->vertex[v]);
//	q[rear++] = v;//���
//	while (front != rear)
//	{
//		int now = q[front++];//����
//		for (int i = 0; i < g->v; i++)
//		{
//			if (g->Adj[now][i] == 1 && visited[i] == 0)
//			{
//				//printf(" %d", G->vertex[i]);
//				v1++;
//				visited[i] = 1;
//				q[rear++] = i;//���
//			}
//		}
//	}
//	printf("%d\n", v1);
//
//
//
//	for (int i = 0; i < g->v; i++)visited[i] = 0;//���÷��ʱ������
//	front = 0, rear = 0;//���ö������飬�ز���������ν
//	visited[w] = 1;
//	//printf(" %d", G->vertex[v]);
//	q[rear++] = w;//���
//	while (front != rear)
//	{
//		int now = q[front++];//����
//		for (int i = 0; i < g->v; i++)
//		{
//			if (g->Adj[now][i] == 1 && visited[i] == 0)
//			{
//				//printf(" %d", G->vertex[i]);
//				w1++;
//				visited[i] = 1;
//				q[rear++] = i;//���
//			}
//		}
//	}
//	printf("%d\n", w1);
//
//	if (visited[v] == 1 && visited[w] == 1)
//		return 1;
//	else return 0;
//}