//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//struct Node {
//    double data; /* �洢������� */
//    struct Node* next; /* ָ����һ������ָ�� */
//};
//typedef struct Node* LinkList; /* ���嵥�������� */
// //LinkListΪָ������
//LinkList List_init()//�����ʼ��_����ͷ�ڵ� 
//{
//    LinkList HeadNode = (LinkList)malloc(sizeof(LinkList));
//    if (HeadNode == NULL)
//    {
//        printf("�ռ仺�治��");
//        return HeadNode;
//    }
//    HeadNode->data = 0;
//    HeadNode->next = NULL;
//    return HeadNode;
//}
//void CreatList(LinkList HeadNode, double* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//{
//    int i = 0;
//    LinkList CurrentNode = HeadNode;
//
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
//
//        {
//            CurrentNode->next = (LinkList)malloc(sizeof(LinkList));
//            CurrentNode = CurrentNode->next;
//        }
//    }
//    CurrentNode->next = NULL;
//    //ĩ�ڵ�û��ָ���κνڵ㣬����ʹ��ָ��ͷ�ڵ㣬����γ�һ��ѭ������
//}
//void AddNode_kepeOrdered(LinkList HeadNode,double k)//����Ԫ��K��˳���HeadNode�ұ�������
//{
//    int i, j;
//    LinkList CurrentNode = HeadNode;
//    while (CurrentNode->next->data < k) CurrentNode = CurrentNode->next;
//    LinkList NodeToInsert = (LinkList)malloc(sizeof(LinkList));//ΪҪ����Ľڵ�����ռ�
//    if (NodeToInsert == NULL)
//    {
//        printf("�ռ仺�治��");
//        return -1;
//    } 
//    NodeToInsert->data = k;
//    NodeToInsert->next = CurrentNode->next;//����ָ����
//    CurrentNode->next = NodeToInsert;//����ָ����
//    return 0;
//
//}
//void printLinkList(LinkList HeadNode)//�����������
//{
//    LinkList CurrentNode= HeadNode;
//    printf("����������ݣ� ");
//    while(CurrentNode!=NULL)
//    {
//        printf("%.lf ", CurrentNode->data);//������Կ��������ʽ
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//int main(void)
//{
//    int i, j;
//    double k = 5;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(double);
//    LinkList HeadNode = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode, InData, DataNum); printLinkList(HeadNode);//��������
//    AddNode_kepeOrdered(HeadNode ,k); printLinkList(HeadNode);
//	system("pause");
//	return 0;
//}