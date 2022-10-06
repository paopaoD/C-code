#include<iostream>
using namespace std;


int main5() {

//指针和数组
//		作用：利用指针访问数组中元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};

	cout << "第一个元素为：" << arr[0] << endl;

	//利用指针访问：
	int* p = arr;

	cout << "指针访问第一个元素" << *p << endl;

	p++;//指针的指向递增，增加了一个int类型空间 4个字节

	cout << "指针访问第二个元素" << *p << endl;



	//重新定义指针
	int* p2 = arr;
	
	//利用指针遍历数组
	for (int i =0;i<10;i++){
		cout << *p2 << endl;
		p2++;
	}







	system("pause");
	return 0;
}