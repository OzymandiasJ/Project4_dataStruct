//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
//typedef struct LinkList
//{
//    int data;
//    struct LinkList* next;//ָ����һ���ڵ��ָ��next
//}LinkList;
//
//void LinkListReverse(LinkList** HeadNode);
//LinkList* commen_houzhui(LinkList* HeadNode1, LinkList* HeadNode2);//�ҵ���ͬ��׺
//LinkList* List_init();//�����ʼ��_����ͷ�ڵ� 
//void CreatList(LinkList* HeadNode, int* InData, int DataNum);//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
//
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
//void CreatList(LinkList* HeadNode, int* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
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
//    //printf("����������ݣ� ");
//    while (CurrentNode != NULL)
//    {
//        printf("%d ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//void qiu_jiao_ji(LinkList* HeadNode1, LinkList* HeadNode2)
//{
//    int num = 0;
//    //printf("������������ݣ� ");
//    LinkList* CurrentNode = HeadNode1, * DynamicNode = HeadNode2;
//    while (CurrentNode->next != NULL)
//    {
//        while (DynamicNode->next != NULL)
//        {
//            if (DynamicNode->data == CurrentNode->data)
//            {
//                if (num > 0) printf(" ");
//                printf("%d ", CurrentNode->data); num++;
//            }
//            DynamicNode = DynamicNode->next;
//        }
//        CurrentNode = CurrentNode->next;
//        DynamicNode = HeadNode2;
//    }
//    if (num == 0)printf("NULL");
//
//}
//
//
//
//int main()
//{
//    int i=0, j=0;
//    int InData1[10] = {0};
//    do { scanf("%d", &InData1[i]); }while (InData1[i++] != -1);
//    int InData2[10] = {0};
//    do { scanf("%d", &InData2[j]); } while (InData2[j++] != -1);
//    int DataNum1 = 0, DataNum2 = 0;
//    while (InData1[DataNum1] != 0)DataNum1++;
//    while (InData2[DataNum2] != 0)DataNum2++;
//    LinkList* HeadNode1 = List_init();
//    LinkList* HeadNode2 = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode1, InData1, DataNum1);//��������
//    CreatList(HeadNode2, InData2, DataNum2);//��������
//    //printLinkList(HeadNode1);//�����������
//    //printLinkList(HeadNode2);//�����������
//    qiu_jiao_ji(HeadNode1, HeadNode2);
//
//    //system("pause");
//    return 0;
//
//}