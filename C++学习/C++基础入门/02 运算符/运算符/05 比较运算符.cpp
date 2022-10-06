#include<iostream>
using namespace std;

int main5() {

	// 比较运算符：
	//		作用：用于表达式的比较，并返回一个真值或假值
	//			== != > < >= <=
	cout << "===========比较运算符===============" << endl;

	int e = 10;
	int r = 20;
	cout << (e == r) << endl;//0
	cout << (e != r) << endl;//1
	cout << (e > r) << endl;//0
	cout << (e < r) << endl;//1
	cout << (e >= r) << endl;//0
	cout << (e <= r) << endl;//1



	system("pause");
	return 0;
}