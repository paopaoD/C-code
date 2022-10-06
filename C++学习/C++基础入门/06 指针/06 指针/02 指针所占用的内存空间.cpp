#include<iostream>
using namespace std;


int main2() {

	//指针所占内存空间

	//定义指针
	int a = 10;

	int* p = &a;

	//在32位操作系统中，指针是占用 4 个字节空间大小，不管是什么数据类型
	//在64位操作系统中，指针是占用 8 个字节空间大小

	cout << "sizeof(int *) = " << sizeof(int * ) << endl;
	cout << "sizeof(int *) = " << sizeof(float * ) << endl;
	cout << "sizeof(int *) = " << sizeof(double * ) << endl;
	cout << "sizeof(int *) = " << sizeof(char * ) << endl;




	//九九乘法表
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {

			cout << j << "*" << i << "=" << j*i << "\t";

		}
		cout << endl;
	}


	//  



	system("pause");
	return 0;
}