#include<iostream>
using namespace std;


int main3() {

	// 2 **实型**（浮点型）

//	2.1 单精度 float		4字节		7位有效数字
//	2.2 双精度 double	8字节		15~16位有效数字

	// 默认情况下，输出一个小数，会显示6位有效数字

	//float f1 = 3.14;	// 默认是双精度，需要在后面加f
	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用内存空间为：" << sizeof(float) << endl;	// 4字节

	cout << "double占用内存空间为：" << sizeof(double) << endl;	// 8字节

	// 科学计数法
	float f2 = 3e2;	// 3*10^2
	cout << "f2 = " << f2 << endl;	// 300

	float f3 = 3e-2; // 3*0.1^2
	cout << "f3 = " << f3 << endl;	// 0.03


	system("pause");
	return 0;
}