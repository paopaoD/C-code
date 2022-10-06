#include<iostream>
using namespace std;


// 值传递函数，互换函数
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// 地址传递函数
void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main6() {

//指针和函数 

	// 1 值传递
	int a = 10;
	int b = 20;
	swap01(a, b);

	//输出结果，两个实参没有发生改变
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	// 2 地址传递
	int x = 10;
	int y = 20;

	swap02(&x, &y);	//传入的是x y的地址

	//输出结果 两者实参发生了互换
	cout << "x = " << x << endl;//20
	cout << "y = " << y << endl;//10



// 总结：如果不想修改实参，就用值传递函数，
//		如果想修改实参，就用地址传递

	system("pause");
	return 0;
}