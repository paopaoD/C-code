#include<iostream>
using namespace std;

int main2() {

// sizeof 
	// 可以利用sizeof求出数据类型占用内存大小
	// 语法：sizeof(数据类型/变量)

	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short) << endl; //输出结果为 2
	//或者 直接填写变量
	cout << "short占用内存空间为：" << sizeof(num1) << endl; //输出结果也是 2

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(int) << endl;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "int占用内存空间为：" << sizeof(long) << endl;
	cout << "int占用内存空间为：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "int占用内存空间为：" << sizeof(long long) << endl;
	cout << "int占用内存空间为：" << sizeof(num4) << endl;




	//统计float和double占用内存空间
	cout << "float占用内存空间为：" << sizeof(float) << endl;	// 4字节

	cout << "double占用内存空间为：" << sizeof(double) << endl;	// 8字节


	system("pause");
	return 0;
}