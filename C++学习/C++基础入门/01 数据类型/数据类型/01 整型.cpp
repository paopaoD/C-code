#include<iostream>
using namespace std;

// 左侧资源管理器工具栏去掉之后，在视图里找到解决方案资源管理器，点击即可恢复


int main1() {

	cout << "hello world" << endl;

	int a = 10;
	cout << "a = " << a << endl;


	// 1 **整型**：short(2)  int(4)  long(4)  long long(8)
	// 
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



	//整型大小比较
   // short < int <= long <= long long






	system("pause");

	return 0;
}
