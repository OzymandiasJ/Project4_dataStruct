//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR -1
//typedef int ElementType;
//typedef enum { push, pop, inject, eject, end } Operation;
//typedef enum { false, true } bool;
//typedef int Position;
//typedef struct QNode* PtrToQNode;
//struct QNode {
//    ElementType* Data;      /* 存储元素的数组   */
//    Position Front, Rear;   /* 队列的头、尾指针 */
//    int MaxSize;            /* 队列最大容量     */
//};
//typedef PtrToQNode Deque;
//
//Deque CreateDeque(int MaxSize)
//{   /* 注意：为区分空队列和满队列，需要多开辟一个空间 */
//    Deque D = (Deque)malloc(sizeof(struct QNode));
//    MaxSize++;
//    D->Data = (ElementType*)malloc(MaxSize * sizeof(ElementType));
//    D->Front = D->Rear = 0;
//    D->MaxSize = MaxSize;
//    return D;
//}
//
//bool Push(ElementType X, Deque D);
//ElementType Pop(Deque D);
//bool Inject(ElementType X, Deque D);
//ElementType Eject(Deque D);
//Operation GetOp();          /* 裁判实现，细节不表 */
//void PrintDeque(Deque D); /* 裁判实现，细节不表 */
////push, pop, inject, eject, end
////0      1     2       3     4
//int GetOp() 
//{
//    char s[10] = { '\0' };
//    scanf("%s",s);
//    switch (s[2])
//    {
//    case 's':return 0;
//    case 'p':return 1;
//    case 'j':return 2;
//    case 'e':return 3;
//    case 'd':return 4;
//    }
//}
//
//
//
//bool Push(ElementType X, Deque D)//队头插入
//{//Push和Inject应该在正常执行完操作后返回true，
// //或者在出现非正常情况时返回false
// //当Front和Rear相等时队列为空，Pop和
// //Eject必须返回由裁判程序定义的ERROR
//    //定义为循环队列
//    if ((D->Rear - D->Front + D->MaxSize) % D->MaxSize == D->MaxSize)return false;
//    D->Data[D->Rear] = X;
//    D->Rear++;
//
//
//
//
//}
//ElementType Pop(Deque D);//队头弹出
//bool Inject(ElementType X, Deque D);//队尾插入
//ElementType Eject(Deque D);//队尾弹出
//int main()
//{
//    ElementType X;
//    Deque D;
//    int N, done = 0;
//
//    scanf("%d", &N);
//    D = CreateDeque(N);
//    while (!done) {
//        switch (GetOp()) {
//        case push:
//            scanf("%d", &X);
//            if (!Push(X, D)) printf("Deque is Full!\n");
//            break;
//        case pop:
//            X = Pop(D);
//            if (X == ERROR) printf("Deque is Empty!\n");
//            else printf("%d is out\n", X);
//            break;
//        case inject:
//            scanf("%d", &X);
//            if (!Inject(X, D)) printf("Deque is Full!\n");
//            break;
//        case eject:
//            X = Eject(D);
//            if (X == ERROR) printf("Deque is Empty!\n");
//            else printf("%d is out\n", X);
//            break;
//        case end:
//            PrintDeque(D);
//            done = 1;
//            break;
//        }
//    }
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
////这里只能采用循环链表方式
//bool Push(ElementType X, Deque D)//头入队
//{
//    if ((D->Rear + 1) % D->MaxSize == D->Front) return false;//队满，下一个元素就是队头
//    else
//    {
//        D->Front = ((D->Front - 1) + D->MaxSize) % D->MaxSize;
//        /*确保下标为正*/
//        D->Data[D->Front] = X;
//        return true;
//    }
//}
//ElementType Pop(Deque D)//头出队
//{
//    int x;
//    if (D->Front == D->Rear) return ERROR;
//    else
//    {
//        x = D->Data[D->Front];
//        D->Front = (D->Front + 1) % D->MaxSize;//头往后移动
//        return x;
//    }
//}
//bool Inject(ElementType X, Deque D)//尾入队
//{
//    if ((D->Rear + 1) % D->MaxSize == D->Front)
//        return false;
//    else
//    {
//        D->Data[D->Rear] = X;
//        D->Rear = (D->Rear + 1) % D->MaxSize;//尾巴往后移动
//        return true;
//    }
//}
//ElementType Eject(Deque D)//尾出队
//{
//    if (D->Front == D->Rear)
//        return ERROR;
//    else
//    {
//        D->Rear = (D->Rear - 1 + D->MaxSize) % D->MaxSize; /*确保下标为正*/
//        return D->Data[D->Rear];
//    }
//}