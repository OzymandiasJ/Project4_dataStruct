//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
////#define ERROR 0
////#define OK 1
//#define ERROR -1
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//    ElementType Data;
//    PtrToNode   Next;
//};
//typedef PtrToNode List;//List��ʵ�ǽڵ����ͣ�����Ҫ��*
//ElementType Find(List L, int m);
//List Read()//�����ʼ��_����ͷ�ڵ� 
//{
//    List HeadNode = (List*)malloc(sizeof(List));
//    if (HeadNode == NULL)
//    {
//        printf("�ռ仺�治��");
//        return HeadNode;
//    }
//    HeadNode->Data = 0;
//    HeadNode->Next = NULL;
//    return HeadNode;
//}
//void CreatList(List HeadNode, double* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//{
//    int i = 0;
//    List CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->Data = InData[i];
//
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
//
//        {
//            CurrentNode->Next = (List*)malloc(sizeof(List));
//            CurrentNode = CurrentNode->Next;
//        }
//    }
//    CurrentNode->Next = NULL;
//    //ĩ�ڵ�û��ָ���κνڵ㣬����ʹ��ָ��ͷ�ڵ㣬����γ�һ��ѭ������
//}
//
//int main(void)
//{
//    List L;
//    L = Read();
//    double a[10] = {1,2,3,4,5,6,7,8,9,10};//ע����������Ҫ�ͺ����������Ͷ�Ӧһ�£���������
//    CreatList(L,a,10);
//    int m;
//    scanf("%d", &m);
//    printf("%d\n", Find(L, m));
//    return 0;
//}
//ElementType Find(List L, int m)//LΪͷ�ڵ�
//{
//    int num = 0; int i;
//    List CurrentNode = L;
//    while (CurrentNode != NULL)//��ȡ������num
//    {
//        CurrentNode = CurrentNode->Next;
//        num++;
//    }
//    CurrentNode = L;
//    for (i=0;i<num-m;i++)//��ָ��ָ������m���ڵ�
//    {
//        CurrentNode = CurrentNode->Next;
//    }
//   return CurrentNode->Data;//���������m���ڵ�
//
//}