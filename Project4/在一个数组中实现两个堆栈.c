//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning(disable:4996)
//#define ERROR 1e8
//typedef int ElementType;
//typedef enum { push, pop, end } Operation;//push=0;pop=1;end=2
//typedef enum { false, true } bool;
//typedef int Position;
////����Tag�Ƕ�ջ��ţ�ȡ1��2��MaxSize��ջ����Ĺ�ģ��Stack�ṹ�������£�
//struct SNode {
//    ElementType* Data;
//    Position Top1, Top2;
//    int MaxSize;
//};
//typedef struct SNode* Stack;
////ע�⣺�����ջ������Push�������������Stack Full�����ҷ���false�����
////ĳ��ջ�ǿյģ���Pop�������������Stack Tag Empty��������Tag�Ǹö�ջ�ı�ţ������ҷ���ERROR��
//
////�����ӿڶ��壺
//Stack CreateStack(int MaxSize);
//bool Push(Stack S, ElementType X, int Tag);
//ElementType Pop(Stack S, int Tag);
//
//Operation GetOp();  /* details omitted */
//void PrintStack(Stack S, int Tag); /* details omitted */
//int GetOp();//��ȡ����
//
//
//
//
//
//int main()
//{
//    int N, Tag = 1, X = 1;
//    Stack S;
//    int done = 0;
//    int c = 0;
//
//    scanf("%d", &N);
//    S = CreateStack(N);
//    while (c != 2) {
//        switch (c = GetOp()) {
//        case push:
//            scanf("%d %d", &Tag, &X);
//            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
//            break;
//        case pop:
//            scanf("%d", &Tag);
//            X = Pop(S, Tag);
//            if (X == ERROR) printf("Stack %d is Empty!\n", Tag);
//            break;
//        case end:
//            /* PrintStack(S, 1);
//             PrintStack(S, 2);
//             done = 1;*/
//            break;
//        }
//    }
//
//    return 0;
//}
///* ��Ĵ��뽫��Ƕ������ */
//Stack CreateStack(int MaxSize)
//{
//    Stack S = (Stack)malloc(sizeof(Stack));
//    S->Data = (int*)malloc(sizeof(int) * MaxSize);
//    S->Top1 = -1;
//    S->Top2 = MaxSize;
//    S->MaxSize = MaxSize;
//    return S;
//}
//bool Push( Stack S, ElementType X, int Tag )
//{
//    if(S->Top2-S->Top1==1)
//    {
//        printf("Stack Full\n");
//        return false;
//    }
//    else
//    {
//        if(Tag==1) S->Data[++(S->Top1)]=X;
//        else if(Tag==2) S->Data[--(S->Top2)]=X;
//        return true;
//    }
//}
//ElementType Pop(Stack S, int Tag)//��ջ
//{
//
//    if (Tag == 1)
//    {
//        if (S->Top1 == -1) { printf("Stack %d Empty\n", Tag); return ERROR; }
//        //S->Data[S->Top1] = 0;
//        S->Top1--;
//        return S->Data[S->Top1 + 1];
//    }
//    else
//    {
//        if (S->Top2 >= S->MaxSize) { printf("Stack %d Empty\n", Tag); return ERROR; }
//        //S->Data[S->Top2] = 0;//ע�ⲻҪ�������0������͹̶�return 0��
//        S->Top2++;
//        return S->Data[S->Top2 - 1];
//    }
//}
//
//
//
//
//int GetOp()
//{
//    char s[10] = { '\0' };
//    scanf("%s", s);
//    switch (s[1])
//    {
//    case 'u':return 0;
//    case 'o':return 1;
//    case 'n':return 2;
//    }
//}
