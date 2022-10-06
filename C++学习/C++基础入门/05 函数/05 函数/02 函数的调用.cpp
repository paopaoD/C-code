#include<iostream>
using namespace std;

// 定义加法函数
int add1(int num1, int num2) //定义中的num1和num2成为形式参数，
							 // 简称形参
{

	int sum = num1 + num2;

	return sum;
}

int main2() {

	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用语法：函数名称(参数)
	// a和b成为实际参数，简称实参，调用函数时，实参的值会传递给形参
	int c = add1(a, b);
	cout << "c = " <<c << endl;

	a = 100;
	b = 200;
	int d = add1(a, b);
	cout << "d = " << d << endl;

	system("pause");

	return 0;
}


