#include"swap.h"	//头文件引用

//函数的定义
void swap1(int a, int b) {

	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}