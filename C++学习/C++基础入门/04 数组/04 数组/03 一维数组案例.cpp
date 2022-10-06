#include<iostream>
using namespace std;

int main3() {

	// 1，五只小猪称体重

	// 创建数组
	int arr[5] = { 300,550,200,400,250 };

	int max = 0;//定义一个最大的数
	//遍历数组，挨个比较 大的替换
	for (int i = 0; i < 5; i++) {

		if (max < arr[i]) {

			max = arr[i];
		}
	}
	cout << "最重的小猪体重是：" <<max << endl;

	cout << "=============数组元素逆置=================" << endl;

	// 2,数组元素逆置
	//		原数组为 1,3,2,5,4  逆置后为 4,5,2,3,1

	int arr1[5] = { 1,3,2,5,4 };

	cout << "逆置前的数组为：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}

	//实现逆置
	int start = 0;	// 第一个元素索引
	int end = sizeof(arr1) / sizeof(arr1[0])-1;//末尾元素索引

	//循环 只要第一个元素索引小于末尾索引，就继续执行
	while (start < end) {

		//实现元素互换
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;

		//更新索引
		start++;
		end--;
	}

	cout << "逆置后的数组为：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	




	system("pause");
	return 0;
}