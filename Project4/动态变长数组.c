//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//
//typedef int Elem;
//
//typedef enum bool
//{
//    false,//0
//    true  //1
//} bool;//����ֵ
//
//typedef struct DynamicArray
//{
//    size_t capacity;   // �������������ʼֵ����Сֵ��Ϊ16u
//    size_t size;       // ������Ԫ�صĸ���
//    Elem* data;     // ���ڱ���������Ԫ�ص��ڴ�ռ�
//} DynamicArray;
//
//int main()
//{
//    char line[100];
//    DynamicArray* arr = NULL;
//    size_t size;
//    size_t pos;
//    Elem v;
//
//    while (gets(line))
//    {
//        switch (line[0])
//        {
//        case 'C': // ��������
//            arr = DynamicArray_new();
//            break;
//        //case 'D': // ɾ������
//        //    DynamicArray_delete(arr);
//        //    arr = NULL;
//        //    break;
//        //case 'R': // resize
//        //    sscanf(line + 2, "%lu", &size);
//        //    DynamicArray_resize(arr, size);
//        //    break;
//        //case 'c': // ���capacity
//        //    printf("%lu\n", DynamicArray_capacity(arr));
//        //    break;
//        //case 's': // ���size
//        //    printf("%lu\n", DynamicArray_size(arr));
//        //    break;
//        //case 'i': // ����Ԫ��
//        //    sscanf(line + 2, "%lu %d", &pos, &v);
//        //    DynamicArray_insert(arr, pos, &v);
//        //    break;
//        //case 'd': // ɾ��Ԫ�ز����
//        //    sscanf(line + 2, "%lu", &pos);
//        //    printf("%d\n", DynamicArray_erase(arr, pos));
//        //    break;
//        //case 'G': // getԪ�ز����
//        //    sscanf(line + 2, "%lu", &pos);
//        //    printf("%d\n", DynamicArray_get(arr, pos));
//        //    break;
//        //case 'S': // setԪ��
//        //    sscanf(line + 2, "%lu %d", &pos, &v);
//        //    DynamicArray_set(arr, pos, &v);
//        //    break;
//        //case 'e': // ��������Ƿ�Ϊempty
//        //    printf("%s\n", DynamicArray_empty(arr) == true ? "true" : "false");
//        //    break;
//        default:
//            break;
//        }
//    }
//
//    return 0;
//}
//
///* ����������д�� */
//// �������飬��ʼ����Ϊ16��
////DynamicArray* DynamicArray_new()
////{
////    arr = (int*)malloc(16*4);
////    return p;
////}
//// �����У���λ��posǰ����Ԫ��*v��Ҳ����*v��������������еĵ�pos��Ԫ�أ��±��0��ʼ��
//// ע�⣬������������ܷ��������ı����������ڴ�������ǺϷ��ģ�����Ҫ����ڴ治���׳��쳣��
//// ���磺
////      1. pos = 10  ����ʾ�ڵ�10��Ԫ��ǰ����Ԫ��*v���������ǰ����10��Ԫ�أ�ԭ���ĵ�10��Ԫ����������
////      2. pos = 0   ����ʾ���������ʼλ�ò���Ԫ��*v
////      3. pos = size����ʾ�������ĩβ����Ԫ��*v
////void DynamicArray_insert(DynamicArray* this, size_t pos, const Elem* v)
////{
////
////
////}
