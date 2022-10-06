#include<iostream>
using namespace std;

int main1() {

	//数组：就是一个集合，里面存放了想同类型的数据元素
	//	特点1：数组中的每个数据元素都是相同的数据类型
	//	特点2：数组是由连续的内存位置组成的

	//数组的定义方法：
	// 1,数据类型 数组名[数组长度];
	int arr[5];
	//给数组中的元素赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//打印数组中的某个值
	cout << arr[2] << endl;
	 


	// 2,数据类型 数组名[数组长度] = {值1，值2...};
	int arr2[5] = { 10,20,30,40,50 };
	//如果在初始化数据时，数组内的值没有全部填写完，会用0填补剩余数据
	// 例如：
	//		int arr2[5] = { 10,20,30 }
	//		 输出的结果是 10,20,30,0,0

	//利用for循环，遍历数组
	for (int i = 0; i < 5; i++) 
	{
		cout << arr2[i] << endl;
	}
	
	
	// 3,数据类型 数组名[] = {值1，值2...};
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };

	//利用for循环，遍历数组
	for (int i = 0; i < 9; i++) 
	{
		cout << arr3[i] << endl;
	}

	cout << arr3 << endl;
	cout << sizeof(arr3) << endl;
	cout << sizeof(arr3[0]) << endl;













	system("pause");
	return 0;
}