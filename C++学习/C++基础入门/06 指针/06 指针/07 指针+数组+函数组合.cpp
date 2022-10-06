#include<iostream>
using namespace std;

//利用指针+数组+函数  实现冒泡排序



//定义冒泡排序函数
void bubbleSort(int *arr, int len) 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//如果 j > j+1的值，交换数字
			if (arr[j] > arr[ j + 1 ]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//定义打印数组函数
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}


int main() {

//利用指针+数组+函数  实现冒泡排序

	// 1 创建数组
	int arr[10] = { 4,8,6,2,10,3,1,7,9,5 };

	// 2 计算数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	// 3 调用冒泡排序函数
	bubbleSort(arr,len);

	// 4 打印排序后的数组
	printArray(arr, len);


	system("pause");
	return 0;
}




