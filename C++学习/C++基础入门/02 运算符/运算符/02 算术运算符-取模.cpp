#include<iostream>
using namespace std;

int main2() {

// 取模运算   
 	 cout << "===========取模运算===============" << endl;
	// 本质  就是求余数

	int a3 = 10;
	int b3 = 3;
	cout << "取模的结果为：" << a3 % b3 << endl;

	int a4 = 10;
	int b4 = 20;
	cout << "除数大的时候取模：" << a4 % b4 << endl;   // 当分母比较大时，取模的值还是分子

	int a5 = 10;
	int b5 = 0;
	//两个数相除，除数不可以为0，所以也做不了取模运算
	//cout << a5 % b5 << endl;  


	// 两个小数是不可以做取模运算的
	double d5 = 3.14;
	double d6 = 1.1;
	//cout << d5 % d6 << endl;



	system("pause");
	return 0;
}

