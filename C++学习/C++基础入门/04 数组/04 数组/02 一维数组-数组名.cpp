#include<iostream>
using namespace std;


int main2() {

	//数组名用途

	//1，可以通过数组名统计整个数组占用内存大小
	int arr[] = { 10,20,30,40,50,60,70,80,90 };

	cout << "整个数组占用内存："<< sizeof(arr) << endl;
	cout << "每个元素占用内存：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;


	//2，可以通过数组名查看数组首地址
	cout << "首地址为：" << arr << endl;//结果为16进制数
	cout << "首地址为：" << (int)arr << endl;//结果为10进制数

	// 要查看数组内某个元素的地址，要加一个取址符号 &
	cout << "第一个元素地址：" << (int)&arr[0] << endl;
	cout << "第二个元素地址：" << (int)&arr[1] << endl;


	//数组名是一个常量，不可以进行赋值操作
	//arr = 100; 错误，数组名是一个常量，不可以进行赋值操作


	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}