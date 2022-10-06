#include<iostream>
using namespace std;
#include"swap.h"	//引用头文件

/*
函数的分文件编写：
	1,创建 .h 后缀名的头文件
	2,穿件 .cpp 后缀名的源文件
	3,在头文件中写函数的声明
	4,在源文件中写函数的定义
*/


// 比如：

// 实现两个数字交换的函数

////函数的声明		-->写到swap.h的头文件中(框架也要写)
//void swap1(int a, int b);


////函数的定义		-->写到swap.cpp的源文件中
//void swap1(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}



int main() {

	int a = 10;
	int b = 20;

	swap1(a, b);


	system("pause");

	return 0;
}