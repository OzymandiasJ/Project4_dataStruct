//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//����ڵ㣬Ҳ����ʹ��class��class��struct���������Ĭ�ϵķ���Ȩ�޲�ͬ
///*typedef struct LNode
//{
//    int Element ;
//    struct LNode* next;
//}LinkList*/;
//typedef struct LinkList
//{
//    double data;
//    struct LinkList* next;//ָ����һ���ڵ��ָ��next
//}LinkList;
//
//LinkList* List_init()//�����ʼ��_����ͷ�ڵ� 
//{
//    LinkList* HeadNode = (LinkList*)malloc(sizeof(LinkList));
//    if (HeadNode == NULL)
//    {
//        printf("�ռ仺�治��");
//        return HeadNode;
//    }
//    HeadNode->data = 0;
//    HeadNode->next = NULL;
//    return HeadNode;
//}
//
//void CreatList(LinkList* HeadNode, double* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//{
//    int i = 0;
//    LinkList* CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
//
//        {
//            CurrentNode->next = (LinkList*)malloc(sizeof(LinkList));
//            CurrentNode = CurrentNode->next;
//        }
//    }
//    CurrentNode->next = NULL;
//    //ĩ�ڵ�û��ָ���κνڵ㣬����ʹ��ָ��ͷ�ڵ㣬����γ�һ��ѭ������
//}
//void printLinkList(LinkList* HeadNode)//�����������
//{
//    LinkList* CurrentNode = HeadNode;
//    printf("����������ݣ� ");
//    while (CurrentNode != NULL)
//    {
//        printf("%.lf ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//void LinkListReverse(LinkList** HeadNode)//�޸�ԭ����ͷָ�룬���Դ��ݶ���ָ��
//{
//    LinkList* temp;
//    LinkList* CurrentNode = NULL;
//    while (*HeadNode)
//    {
//        temp = *HeadNode;//��ס��ǰͷ�ڵ�λ��
//        *HeadNode = (*HeadNode)->next;//ͷ�ڵ���������ƶ�������ͷ�ڵ㣬ע����������ȼ�
//        temp->next = CurrentNode;//����ͷ�ڵ�ָ����ָ��ǰ��ڵ�
//        CurrentNode = temp;//���µ�ǰ�ڵ�
//    }
//    *HeadNode = CurrentNode;
//}
//
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(double);
//    LinkList* HeadNode = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode, InData, DataNum);//��������
//    printLinkList(HeadNode);//�����������
//    LinkListReverse(&HeadNode);//����ԭ������
//    printLinkList(HeadNode);//�����������
//
//    system("pause");
//    return 0;
//
//}