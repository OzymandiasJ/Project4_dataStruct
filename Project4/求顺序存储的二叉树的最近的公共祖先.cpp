////不建树二分法查找共同祖先
////设顺序存储的二叉树中有编号为i和j的两个结点，请设计算法求出它们最近的公共祖先结点的编号和值。
////输入格式:
////输入第1行给出正整数n（≤1000），即顺序存储的最大容量；第2行给出n个非负整数，其间以空格分隔。其中0代表二叉树中的空结点（如果第1个结点为0，则代表一棵空树）；第3行给出一对结点编号i和j。
////
////题目保证输入正确对应一棵二叉树，且1≤i, j≤n。
////
////输出格式 :
////如果i或j对应的是空结点，则输出ERROR: T[x] is NULL，其中x是i或j中先发现错误的那个编号；否则在一行中输出编号为i和j的两个结点最近的公共祖先结点的编号和值，其间以1个空格分隔。
//#include<stdio.h>
//int findFather(int n, int m);
//int main(void)
//{
//	int binTree[1011] = { '\0' };//顺序树
//	int N;
//	int result = 0;
//	scanf("%d", &N);//输入树的容量
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &binTree[i]);
//	}
//	int num_1 = 0, num_2 = 0;
//	scanf("%d %d", &num_1, &num_2);//输入寻找结点的位置
//	result = findFather(num_1, num_2);//调用函数
//	if (num_1 == num_2)//当寻找重合结点时
//		printf("%d %d\n", num_1, binTree[num_1 - 1]);
//	else if (binTree[num_1 - 1] == 0)//当寻找的结点不存在时
//		printf("ERROR: T[%d] is NULL\n", num_1);
//	else if (binTree[num_2 - 1] == 0)
//		printf("ERROR: T[%d] is NULL\n", num_2);
//	else
//		printf("%d %d\n", result, binTree[result - 1]);
//
//	return 0;
//}
//int findFather(int n, int m)
//{/*因为一个树节点的根节点是其所在位置的/2的位置上，所以可以使用类似二分查找的方法来完成共同根节点的查找*/
//	while (1) {
//		if (n > m)//二分法查找
//			n /= 2;
//		else
//			m /= 2;
//		if (n == m)
//			break;
//	}
//	return n;
//}
