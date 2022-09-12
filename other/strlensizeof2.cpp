#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char arr1[] = "hello12321";//字符串转字符数组，转的时候会默认加上\0;因为字符数组边界是没有约束的，需要\0识别到结束
    const char* arr2 = "hello12321";
    printf("%d %d\n", strlen(arr1), strlen(arr2));//10 10 
    printf("%d %d\n", sizeof(arr1), sizeof(arr2));//11 8
    //两个10表示不管是指针还是数组里面的字符元素个数都是10个
    //11表示字符串数组有10个元素再加上一个\0结尾（因为字符串数组实际上开辟的空间就是要计算\0），11表示字符数组有10个元素再加上一个\0结尾（因为
    //字符串数组实际上开辟的空间就是要计算\0）,\0结尾的目的：C / C++中字符数组边界是没有约束的，cout时会越界输出乱码。所以要加上\0
    //8表示int类型的指针在64位系统中是占8个字节的
    int* a;
    int b = 8;
    a = &b;
    printf("%d\n", sizeof(a));//8说明系统是64位的
    return 0;
}