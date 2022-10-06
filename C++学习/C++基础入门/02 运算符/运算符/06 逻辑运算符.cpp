#include<iostream>
using namespace std;

int main6() {

	// 逻辑运算符
	cout << "===========逻辑运算符===============" << endl;
	
	// 1，逻辑运算符 非	！-->如果w为真，则!w为假，如果w为假，则!w为真
	int w = 10;
	//在C++中，除了0，都为真
	cout << !w << endl;//假 0

	cout << !!w << endl;//真 1


	// 2，逻辑运算符	与	&&	-->两个条件都为真，结果为真，相当于 且 and	
	int w1 = 10;
	int r1 = 0;
	cout << (w1 && r1) << endl;//假 0

	w1 = 0;
	r1 = 0;
	cout << (w1 && r1) << endl;// 0

	w1 = 10;
	r1 = 10;
	cout << (w1 && r1) << endl;//1

	// 同真为真，其余为假



	// 3，逻辑运算符	或	||	-->两个条件有一个为真，结果为真，相当于 or
	int w2 = 10;
	int r2 = 0;
	cout << (w2 || r2) << endl;//真 1

	w2 = 10;
	r2 = 10;
	cout << (w2 || r2) << endl;//真 1

	w2 = 0;
	r2 = 0;
	cout << (w2 || r2) << endl;//假 0

	//同假为假，其余为真

	system("pause");
	return 0;
}