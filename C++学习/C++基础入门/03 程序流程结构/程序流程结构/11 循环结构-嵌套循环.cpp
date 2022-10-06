#include<iostream>
using namespace std;


int main11() {

	//利用嵌套循环实现星图

	//外层循环	外层循环执行一次，内层循环执行一周
	for (int i = 0; i < 10; i++) 
	{
		//内层循环
		for (int j = 0; j < 10; j++) 
		{
			cout << "* ";
		}
		cout << endl;
	}
	

	//九九乘法表
	for (int i = 1; i < 10; i++) 
	{
		for (int j = 1; j <= i;j++) 
		{
			cout << j << "*" << i << "=" << j * i<<"\t";
		}
		cout << endl;
	}













	system("pause");
	return 0;
}