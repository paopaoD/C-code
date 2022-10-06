#include<iostream>
using namespace std;


int main12() {

// break语句
//	 作用：跳出选择结构或者循环结构
//	 break使用的时机：
//		1,出现在switch条件语句中，作用是种植case并跳出switch
//		2,出现在循环语句中，作用是跳出当前的循环语句
//		3,出现在嵌套循环中，跳出最近的内层循环语句

	//// 1，出现在switch条件语句中，作用是种植case并跳出switch
	//cout << "1，普通" << endl;
	//cout << "2，中等" << endl;
	//cout << "3，困难" << endl;
	//cout << "请选择副本难度:" << endl;

	//int select = 0;	//创建选择结果的变量

	//cin  >> select;	//等待用户输入

	//switch (select)
	//{
	//case 1:
	//	cout << "您选择的是普通难度" << endl;
	//	break;
	//case 2:
	//	cout << "您选择的是中等难度" << endl;
	//	break;
	//case 3:
	//	cout << "您选择的是困难难度" << endl;
	//	break;
	//default:
	//	break;
	//}



	// 2,出现在循环语句中，作用是跳出当前的循环语句
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;	//退出循环
		}
		cout << i << endl;
	}


	// 3,出现在嵌套循环中，跳出最近的内层循环语句
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) {
				break;	//退出内层循环
			}
			cout << "* ";
		}
		cout << endl;
	}






	system("pause");
	return 0;
}