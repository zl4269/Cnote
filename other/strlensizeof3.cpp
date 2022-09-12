#include<iostream>
#include<vector>
#include<string.h>
using namespace std; 

int main() {
	vector<char> vstr;
	cout << sizeof(vstr) << endl;//32
	cout << vstr.size() << endl; //0 vector统计元素的个数函数v.size()
	//从STL源码分析得到，vector类底层有四个成员变量：iterator  _First  _Last,  _End;
	//这四个变量都是指针，因此在64位机器上占用32个字节。

	cout << "##########################" << endl;
	char str[20] = "0123456789";
	int a = strlen(str); 
	int b = sizeof(str); //计算的长度
	cout << a << endl;// a=10;
	cout << b << endl;// b=20;
	return 0;
}