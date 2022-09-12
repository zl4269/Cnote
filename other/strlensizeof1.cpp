#include<string>
#include<iostream>
#include<string.h>
using namespace std;


int main() {
	char a[] = { 'a','b','c','d','e','f' };    //字符数组
	char b[] = "abcdef";                       //字符串
	char* c = (char*)"abcdef";               //字符串
	string d = b;                            //C++string类
	//string类可接受char * 和char[]的直接赋值
	//但是反过来就不可以

	cout << "#########################sizeof########################" << endl; 
	cout << "sizeof(a): " << sizeof(a) << endl; //6
	cout << "sizeof(b): " << sizeof(b) << endl; //7 转换的时候会自动加上'\0'
	cout << "sizeof(c): " << sizeof(c) << endl; //8 64位系统
	cout << "sizeof(d): " << sizeof(d) << endl; //具体输出的值跟string实现的库有关，但是同一个操作系统同一个库下面该值是确定的  最经典的是等于4 自己电脑运行等于40  其他还可能是12  32  28等

	cout << "#########################字符串########################" << endl;
	//cout<<a<<endl;                         //输出这个会有一堆乱码
	char a1[] = { 'a','b','c','d','e','f','\0' };
	cout << a1 << endl;                           //正常输出

	cout << "length of b: " << strlen(b) << endl; //6 计算的是字符个数
	cout << "length of c: " << strlen(c) << endl; //6
	cout << "length of d: " << d.length() << endl;//6


	cout << "#########################\0#############################" << endl;
	char buf1[] = "he\0llo\0";
	cout << sizeof(buf1) << endl; //8   最后一个\0占一个字节，中间的\0占两个字节
	cout << strlen(buf1) << endl; //2   strlen()：遇第一个\0结束大小的统计，也即不视\0后的字符为当前字符串的内容
	char buf2[] = "\0\0";
	cout << sizeof(buf2) << endl; //3
	cout << strlen(buf2) << endl; //0

	return 0;

}