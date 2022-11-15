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
//    ElementType* Data;      /* �洢Ԫ�ص�����   */
//    Position Front, Rear;   /* ���е�ͷ��βָ�� */
//    int MaxSize;            /* �����������     */
//};
//typedef PtrToQNode Deque;
//
//Deque CreateDeque(int MaxSize)
//{   /* ע�⣺Ϊ���ֿն��к������У���Ҫ�࿪��һ���ռ� */
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
//Operation GetOp();          /* ����ʵ�֣�ϸ�ڲ��� */
//void PrintDeque(Deque D); /* ����ʵ�֣�ϸ�ڲ��� */
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
//bool Push(ElementType X, Deque D)//��ͷ����
//{//Push��InjectӦ��������ִ��������󷵻�true��
// //�����ڳ��ַ��������ʱ����false
// //��Front��Rear���ʱ����Ϊ�գ�Pop��
// //Eject���뷵���ɲ��г������ERROR
//    //����Ϊѭ������
//    if ((D->Rear - D->Front + D->MaxSize) % D->MaxSize == D->MaxSize)return false;
//    D->Data[D->Rear] = X;
//    D->Rear++;
//
//
//
//
//}
//ElementType Pop(Deque D);//��ͷ����
//bool Inject(ElementType X, Deque D);//��β����
//ElementType Eject(Deque D);//��β����
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
///* ��Ĵ��뽫��Ƕ������ */
////����ֻ�ܲ���ѭ������ʽ
//bool Push(ElementType X, Deque D)//ͷ���
//{
//    if ((D->Rear + 1) % D->MaxSize == D->Front) return false;//��������һ��Ԫ�ؾ��Ƕ�ͷ
//    else
//    {
//        D->Front = ((D->Front - 1) + D->MaxSize) % D->MaxSize;
//        /*ȷ���±�Ϊ��*/
//        D->Data[D->Front] = X;
//        return true;
//    }
//}
//ElementType Pop(Deque D)//ͷ����
//{
//    int x;
//    if (D->Front == D->Rear) return ERROR;
//    else
//    {
//        x = D->Data[D->Front];
//        D->Front = (D->Front + 1) % D->MaxSize;//ͷ�����ƶ�
//        return x;
//    }
//}
//bool Inject(ElementType X, Deque D)//β���
//{
//    if ((D->Rear + 1) % D->MaxSize == D->Front)
//        return false;
//    else
//    {
//        D->Data[D->Rear] = X;
//        D->Rear = (D->Rear + 1) % D->MaxSize;//β�������ƶ�
//        return true;
//    }
//}
//ElementType Eject(Deque D)//β����
//{
//    if (D->Front == D->Rear)
//        return ERROR;
//    else
//    {
//        D->Rear = (D->Rear - 1 + D->MaxSize) % D->MaxSize; /*ȷ���±�Ϊ��*/
//        return D->Data[D->Rear];
//    }
//}