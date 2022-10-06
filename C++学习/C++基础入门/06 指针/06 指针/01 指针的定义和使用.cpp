#include<iostream>
using namespace std;


int main1() {

/*
	指针
		作用：可以通过指针间接访问内存
		
			内存编号是从0开始记录的，一般用十六进制数字表示
			可以利用指针变量保存地址
*/

	// 1，定义指针
	int a = 10;

	//指针定义的语法：数据类型 * 指针变量名；
	int * p;

	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p的地址为：" << p << endl;


	// 2，指针的使用
	//通过 * 操作指针变量指向的内存
	cout << "p = " << p << endl;


	system("pause");
	return 0;
}