#include<iostream>
using namespace std;

int main4() {

// 3 **字符型**：字符型变量用于显示单个字符		只占用1字节内存
	//		语法：char ch = 'a';
	//		字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元


		// 3.1字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	// 3.2字符型变量所占内存大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;

	// 3.3字符型变量常见错误
	//char ch2 = "b";	//创建字符型变量时，要用单引号
	//char ch2 = 'abc'; // 创建字符型变量时，单引号内只能有一个字符

	//3.4字符型变量对应ASCII编码
	cout << ch << "字符对应的编码是" << (int)ch << endl;





// 转义字符：
	// \n	换行
	cout << "hello world\n";

	// \t   tab键	//作用：可以整齐的输出数据
	cout << "hel\tworld" << endl;
	cout << "hell\tworld" << endl;
	cout << "hello\tworld" << endl;

	// \\   反斜杠
	cout << "\\" << endl;


	system("pause");
	return 0;
}