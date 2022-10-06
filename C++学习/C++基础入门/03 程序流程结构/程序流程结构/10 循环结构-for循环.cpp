#include<iostream>
using namespace std;


int main10() {

// for循环语句
//	 作用：满足循环条件，执行循环语句
//	 语法：for(起始表达式;条件表达式;末尾循环体){循环语句;}

	for (int i = 0; i < 10; i++) 
	{
		cout <<"i = " << i << endl;
	}

	cout << "================敲桌子=============" << endl;


	// 敲桌子
	// 从1-100的数字中，找打特殊数字，打印“敲桌子”
	// 如果是 7 的倍数、个位数有7 或者十位有7，打印敲桌子

	for (int num = 1; num <= 100; num++) {
		if (num%7 == 0 || num%10 == 7 || num/10 == 7)
		{
			cout << "敲桌子！" << endl;
		}
		else {
			cout << num << endl;
		}
	}




	system("pause");
	return 0;
}