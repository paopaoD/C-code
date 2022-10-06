#include<iostream>
using namespace std;

int main3() {

	// 运算符--递增递减
	cout << "===========递增递减===============" << endl;
		//1，前置递增
	int i = 10;
	++i;	//等价于 i = i +1
	cout << "i = " << i << endl;//11

	//2，后置递增
	int q = 10;
	q++;
	cout << "q = " << q << endl;//11

	// 前置和后置的区别：

	  //前置递增先对变量进行++，然后在计算表达式
	int i1 = 10;
	int q1 = ++i1 * 10;
	cout << "i1 = " << i1 << endl;//11
	cout << "q1 = " << q1 << endl;//110

	//后置递增先计算表达式，后对变量进行++
	int i2 = 10;
	int q2 = i2++ * 10;
	cout << "i2 = " << i2 << endl;//11
	cout << "q2 = " << q2 << endl;//100 先计算 10*10 再进行++ 

	cout << "==========================" << endl;


	//3， 前置递减
	int a = 10;
	--a;	//等价于 a = a -1
	cout << "a = " << a << endl;//9

	//4， 后置递减
	int b = 10;
	b--;
	cout << "b = " << b << endl;//9


	//前置/后置递减区别
	//前置递减先对变量进行--，然后在计算表达式
	int a01 = 10;
	int b01 = --a01 * 10;
	cout << "a01 = " << a01 << endl;//9
	cout << "b01 = " << b01 << endl;//90

	//后置递减先计算表达式，然后在对变量进行--
	int a02 = 10;
	int b02 = a02-- * 10;
	cout << "a02 = " << a02 << endl;//9
	cout << "b02 = " << b02 << endl;//100

	cout << "==========================" << endl;

	system("pause");
	return 0;
}