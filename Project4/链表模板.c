//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//
////����ڵ㣬Ҳ����ʹ��class��class��struct���������Ĭ�ϵķ���Ȩ�޲�ͬ
//
//typedef struct LinkList
//{
//    double data;
//	struct LinkList* next;//ָ����һ���ڵ��ָ��next
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
//    for (i = 0; i < DataNum; i++)
//    {
//        CurrentNode->data = InData[i];
//        if (i < DataNum - 1)// ����ÿ�θ�ֵ����Ҫ�½���㣬Ϊ�˱�֤û�ж���ķϽ��
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
//    LinkList* CurrentNode= HeadNode;
//    printf("����������ݣ� ");
//    while(CurrentNode!=NULL)
//    {
//        printf("%.lf ", CurrentNode->data);
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//int InsertList(LinkList* HeadNode, int LocateIndex, int InData)//����ڵ�
//{
//    int i = 1;// ������ʼ���HeadNode��ͷ��㣬���Լ�����1��ʼ
//    LinkList* CurrentNode = HeadNode;
//    //��CurrentNodeָ�������λ�õ�ǰһ����㣨index -1��
//    while (CurrentNode && i < LocateIndex - 1)
//    {
//        CurrentNode = CurrentNode->next;
//        i++;
//    }//�ҵ�Ҫ�����Ľڵ��ֱ��ǰ���ڵ�
//    LinkList* NodeToInsert = (LinkList*)malloc(sizeof(LinkList));//ΪҪ����Ľڵ�����ռ�
//    if (NodeToInsert == NULL)
//    {
//        printf("�ռ仺�治��");
//        return ERROR;
//    }
//    NodeToInsert->data = InData;
//    NodeToInsert->next = CurrentNode->next;//����ָ����
//    CurrentNode->next = NodeToInsert;//����ָ����
//    return OK;
//}
//
//int DeleteList(LinkList* HeadNode, int index)
//{
//    int i = 1;
//    LinkList* CurrentNode = HeadNode;//����CurrentNode��Ϊ�˷������free����ڵ�
//    LinkList* NodeToDelete;
//    //��CurrentNodeָ���ɾ��λ�õ�ǰһ����㣨index -1��
//    while (CurrentNode && i < index - 1)
//    {
//        CurrentNode = CurrentNode->next;
//        i++;
//    }//�ҵ�Ҫ�����Ľڵ��ֱ��ǰ���ڵ�
//    NodeToDelete = CurrentNode->next;//��NodeToDeleteָ���ɾ���Ľڵ�
//    CurrentNode->next = NodeToDelete->next;//���ý��ĺ��ý�����ӵ�ǰ�ý���nextָ�봦
//    free(NodeToDelete);//�ͷŵ���ɾ���ڵ�Ŀռ�
//    return OK;
//}
//
//int GetListLength(LinkList* HeadNode)
//{
//    int num = 0;
//    LinkList* CurrentNode = HeadNode;
//    while (CurrentNode != NULL)
//    {
//        CurrentNode = CurrentNode->next;
//        num++;
//    }
//    printf("������Ϊ: %d\n", num);
//    return num ;
//}
//int DestroyList(LinkList* HeadNode)//��������
//{
//    LinkList* pNext;
//    LinkList* CurrentNode = (LinkList*)HeadNode;
//    while (CurrentNode)
//    {
//        pNext = CurrentNode->next;
//        free(CurrentNode);
//        CurrentNode = pNext;
//    }
//
//    HeadNode->next = NULL;
//
//    return OK;
//
//}
//int main()
//{
//    int i, j;
//    double InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData)/sizeof(double);
//    LinkList* HeadNode = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode, InData, DataNum);//��������
//    printLinkList(HeadNode);//�����������
//    InsertList(HeadNode, 3, 999); printLinkList(HeadNode);//����ڵ㲢�ٴ����
//    GetListLength(HeadNode);//��ȡ�����Ȳ����
//    DeleteList(HeadNode, 3); printLinkList(HeadNode);//ɾ���ڵ㲢�ٴ����
//    GetListLength(HeadNode);//��ȡ�����Ȳ����
//
//
//
//
//
//
//    DestroyList(HeadNode);//��������
//	system("pause");
//	return 0;
//
//}
