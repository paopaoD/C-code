#include<iostream>
using namespace std;


int main14() {

//goto语句
//	作用： 可以无条件跳转语句
//	语法： goto标记
//	解释： 如果标记的名称存在，执行到goto语句时，会跳转到标记的位置


	cout << "执行第一行代码" << endl;

	cout << "执行第二行代码" << endl;

	goto FLAG;	//跳转到标记FLAG的位置

	cout << "执行第三行代码" << endl;

	cout << "执行第四行代码" << endl;

	FLAG:
	cout << "执行第五行代码" << endl;//输出结果 执行1 2 5三行代码










	system("pause");
	return 0;
}