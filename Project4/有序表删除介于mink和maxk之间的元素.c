//#include <stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//#define ERROR 0
//#define OK 1
//#define ElementType int //ע���޸�ElementTypeʱ�޸�print���������ʽ
//����ڵ㣬Ҳ����ʹ��class��class��struct���������Ĭ�ϵķ���Ȩ�޲�ͬ
///*typedef struct LNode
//{
//    int Element ;
//    struct LNode* next;
//}LinkList*/;
//typedef struct LinkList
//{
//    ElementType data;
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
//void CreatList(LinkList* HeadNode, ElementType* InData, int DataNum)//InDataΪҪд������飬DataNumΪ������Ԫ�صĶ���
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
//
//    while (CurrentNode != NULL)
//    {
//        printf("%d ", CurrentNode->data);//ע����øú���ʱ�����޸������ʽ
//        CurrentNode = CurrentNode->next;
//    }
//    printf("\n");
//}
//
//int Delete_mink_maxk(LinkList* HeadNode, int mink, int maxk)//�����ɾ������mink��maxk֮���Ԫ��
//{
//    LinkList* CurrentNode = NULL;
//    LinkList* NodeToDelete, * Node_mink = HeadNode;//����NodeToDelete��Ϊ�˷������free����ڵ�
//    //��CurrentNodeָ���ɾ��λ�õ�ǰһ����㣨index -1��
//    while (Node_mink && (Node_mink->next->data <= mink))
//    {
//        Node_mink = Node_mink->next;
//    }//�ҵ�mink��ֱ��ǰ���ڵ�
//    CurrentNode= HeadNode;
//    while (CurrentNode->data<maxk)
//    {
//        NodeToDelete = Node_mink->next;
//        Node_mink->next = Node_mink->next->next;
//        free(NodeToDelete);
//        CurrentNode = Node_mink->next;
//    }
//
//    return OK;
//}
//
//
//
//int main()
//{
//    int i, j;
//    ElementType InData[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int DataNum = sizeof(InData) / sizeof(ElementType);
//    LinkList* HeadNode = List_init();//��ʼ���������ص�ǰ�ڵ�ָ��
//    CreatList(HeadNode, InData, DataNum);//��������
//    printLinkList(HeadNode);//�����������
//    Delete_mink_maxk(HeadNode, 1 , 4);//�����ɾ������mink��maxk(����)֮���Ԫ��
//    printLinkList(HeadNode);//������ǰż���ں�
//
//
//
//    //DeleteList_ik(HeadNode, 3 , 3 ); printLinkList(HeadNode);//ɾ���ڵ㲢�ٴ����
//    system("pause");
//    return 0;
//
//}
