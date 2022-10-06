#include<iostream>
using namespace std;

/*
值传递：
	就是函数调用是实参将数值传入给形参
	值传递时，如果形参发生，并不会影响实参

*/


// 如果函数不需要返回值，声明的时候可以写void

void swap(int num1, int num2) {

	cout << "交换前：" << endl;
	cout << num1 << endl;
	cout << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << num1 << endl;
	cout << num2 << endl;

}



int main3() {

	int a = 10;
	int b = 20;

	//值传递之前：
	cout << "值传递前：" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//当做值传递的时候，函数的形参发生改变，并不会影响实参
	swap(a, b);

	//值传递之后：函数的形参发生改变，并不会影响实参
	cout << "值传递后：" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	// *** 值传递，形参是影响不了实参的


	system("pause");

	return 0;
}














