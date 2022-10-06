#include<iostream>
using namespace std;


/*
函数声明：
	告诉编译器函数名以及如何调用函数。函数的实际主体可以单独定义
	 (一般只将自定义的函数写在了 main函数的下方时  才会声明)
	 
*/

//比如：

//声明
int max(int a, int b);	//声明可以有多次，但定义只能有一次
int max(int a, int b);


int main5() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}


// 自定义函数
int max(int a, int b) {
	return a > b ? a : b;
}




