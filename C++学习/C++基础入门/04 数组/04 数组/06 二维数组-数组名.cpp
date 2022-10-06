#include<iostream>
using namespace std;

int main6() {

	//二维数组名称用途

	// 1,可以查看占用内存空间大小
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	cout << "二维数组占用内存：" << sizeof(arr) << endl;// 24
	cout << "第一行占用内存：" << sizeof(arr[0]) << endl;// 12
	cout << "第一个元素占用内存：" << sizeof(arr[0][0]) << endl;// 4

	// 获取二维数组的行数：
	cout << "行数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	// 获取二维数组的列数：
	cout << "列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;



	// 2,可以查看二维数组的首地址   
	cout << "数组首地址：" << arr << endl;
				//输出结果默认是16进制，前加(int)转换成十进制
	
	cout << "数组首地址：" << (int)arr << endl;
	
	cout << "数组第一行首地址：" << (int)arr[0] << endl;//1536161144

	cout << "数组第二行首地址：" << (int)arr[1] << endl;//1536161156
	
	// 查看二维数组第一个元素的地址   要加取址符 &
	cout << "数组第一个元素地址：" << (int)&arr[0][0] << endl;




	system("pause");
	return 0;
}