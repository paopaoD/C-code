#include<iostream>
using namespace std;

int main6() {

	// 5 **布尔类型 bool**		1字节
	//		true --- 真  1
	//		false --- 假 0

	bool flag = true;	// true代表真
	cout << flag << endl;

	bool flag2 = false;	// false代表假
	cout << flag2 << endl;

	// 本质上 1 代表真，0 代表假

	// 查看bool类型占用的内存空间
	cout << "bool类型占用的内存为：" << sizeof(bool) << endl;



	system("pause");
	return 0;
}