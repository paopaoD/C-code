#include<iostream>
using namespace std;

int main() {

	// 4 **字符串型**

	//	1，C语言风格字符串
	// 注意事项： 1 char 字符串名[]    后面要加[]
	//			2 等号后面 要用双引号，包含起来字符串

	char str[] = "hello worldddddd";
	cout << str << endl;


	//  2，C++风格字符串

	string str2 = "helloooooo world";
	cout << str2 << endl;



	system("pause");
	return 0;
}