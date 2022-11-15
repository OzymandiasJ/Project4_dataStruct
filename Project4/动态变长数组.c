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
//} bool;//布尔值
//
//typedef struct DynamicArray
//{
//    size_t capacity;   // 数组的容量，初始值和最小值均为16u
//    size_t size;       // 数组中元素的个数
//    Elem* data;     // 用于保存数组中元素的内存空间
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
//        case 'C': // 创建数组
//            arr = DynamicArray_new();
//            break;
//        //case 'D': // 删除数组
//        //    DynamicArray_delete(arr);
//        //    arr = NULL;
//        //    break;
//        //case 'R': // resize
//        //    sscanf(line + 2, "%lu", &size);
//        //    DynamicArray_resize(arr, size);
//        //    break;
//        //case 'c': // 输出capacity
//        //    printf("%lu\n", DynamicArray_capacity(arr));
//        //    break;
//        //case 's': // 输出size
//        //    printf("%lu\n", DynamicArray_size(arr));
//        //    break;
//        //case 'i': // 插入元素
//        //    sscanf(line + 2, "%lu %d", &pos, &v);
//        //    DynamicArray_insert(arr, pos, &v);
//        //    break;
//        //case 'd': // 删除元素并输出
//        //    sscanf(line + 2, "%lu", &pos);
//        //    printf("%d\n", DynamicArray_erase(arr, pos));
//        //    break;
//        //case 'G': // get元素并输出
//        //    sscanf(line + 2, "%lu", &pos);
//        //    printf("%d\n", DynamicArray_get(arr, pos));
//        //    break;
//        //case 'S': // set元素
//        //    sscanf(line + 2, "%lu %d", &pos, &v);
//        //    DynamicArray_set(arr, pos, &v);
//        //    break;
//        //case 'e': // 输出数组是否为empty
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
///* 请在这里填写答案 */
//// 创建数组，初始容量为16。
////DynamicArray* DynamicArray_new()
////{
////    arr = (int*)malloc(16*4);
////    return p;
////}
//// 本题中，在位置pos前插入元素*v，也就是*v插入后，它是数组中的第pos个元素，下标从0开始。
//// 注意，插入后的数组可能发生容量的倍增，假设内存分配总是合法的，不需要针对内存不足抛出异常。
//// 例如：
////      1. pos = 10  ，表示在第10个元素前插入元素*v，插入后它前面有10个元素，原来的第10个元素在它后面
////      2. pos = 0   ，表示在数组的起始位置插入元素*v
////      3. pos = size，表示在数组的末尾插入元素*v
////void DynamicArray_insert(DynamicArray* this, size_t pos, const Elem* v)
////{
////
////
////}
