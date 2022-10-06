#include<iostream>
using namespace std;

int main6() {

	//三目运算符

	//创建三个变量 a b c 
	// 将a和b作比较，将变量大的值赋值给c

	int a = 10;
	int b = 20;
	int c = 0;

	//三目运算符
	c = (a > b ? a : b);  //如果a>b成立，返回a的值，否则 返回b

	cout << "c = " << c << endl;//20  

	//在C++中三目运算符返回的是变量，可以继续赋值
	// 例如：
	(a > b ? a : b) = 100;//如果a>b成立，那么返回b 也就是b=100
	//如果a>b不成立，那么返回a 就是a=100

	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//100



	system("pause");
	return 0;

}