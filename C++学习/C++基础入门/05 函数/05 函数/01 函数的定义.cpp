#include<iostream>
using namespace std;

/*
函数定义：
	语法：
		返回值类型  函数名  ( 参数列表 )
		{
			函数体语句

			return 表达式
		}

*/


//返回值类型：一个函数可以返回一个值，在函数定义中
//函数名：	给函数起个名称
//参数列表：	适应该函数时，传入的数据
//函数体语句：花括号内的代码，函数内需要执行的语句
//return表达式：和返回值类型挂钩，函数执行完后，返回相应的函数



// 加法函数，实现两个整型数字相加，并且相加的结果进行返回

int add(int num1, int num2) {

	int sum = num1 + num2;

	return sum;

}


int main1() {

	system("pause");

	return 0;

}