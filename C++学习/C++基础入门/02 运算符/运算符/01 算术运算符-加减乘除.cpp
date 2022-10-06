#include<iostream>
using namespace std;

int main() {


	// ** 加减乘除
	cout << "===========加减乘除===============" << endl;
	//		作用：用于处理四则运算

	//加减乘除
	int a0 = 10;
	int b0 = 3;

	cout << a0 + b0 << endl;
	cout << a0 - b0 << endl;
	cout << a0 * b0 << endl;
	cout << a0 / b0 << endl;	//两个整数相除，结果依然是整数，将小数部分去除

	int a1 = 10;
	int b1 = 20;
	cout << "两个整数相除结果:" << a1 / b1 << endl;

	int a2 = 10;
	int b2 = 0;
	//cout << a2 / b2 << endl;	//错误！两个数字相除，除数是不能为0的


	cout << "==========================" << endl;


	// 两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << "小数相除结果：" << d1 / d2 << endl;//运算的结果可以是整数

	double d3 = 0.5;
	double d4 = 0.22;
	cout << "小数相除结果：" << d3 / d4 << endl;//运算的结果可以是小数





	system("pause");

	return 0;

}