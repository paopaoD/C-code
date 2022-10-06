#include<iostream>
using namespace std;

int main9() {

/*do...while循环					--->先执行 在判断
	作用：满足循环条件，执行循环语句
	语法：do{循环语句} while(循环条件)
	注意：与while的区别在于do...while会先执行一次循环语句，在判断条件

*/

	// 打印0-9这10个数字
	int num = 0;

	do {	//先执行语句，然后再判断
		cout <<"num = "<< num << endl;
		num++;
	} 
	while (num < 10);



	//do...while和while的区别
	//	do...while:先执行循环语句   再判断条件
	//	while	  :先判断条件   再执行语句


	cout << "===========水仙花数==============" << endl;

	//练习案例：水仙花数
	//  水仙花数是指一个三位数，它的每个位上的数字的3次幂之和等于它本身
	//	例如：1^3+5^3+3^3 = 153

	int num1 = 100;

	// do...while写法：
	do {
		//从所有三位数字中找到水仙花数
		int a = 0;
		int b = 0;
		int c = 0;
		a = num1 % 10;		//个位
		b = num1 / 10 % 10;	//十位
		c = num1 / 100;		//百位

		if(a*a*a + b*b*b + c*c*c == num1) {
			cout <<"dowhile写法水仙花数：" << num1 << endl;
		}
		num1++;
	} 
	while (num1 < 1000);



	//// while写法
	//while (num1 < 1000) {

	//	//从所有三位数字中找到水仙花数
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;
	//	a = num1 % 10;		//个位
	//	b = num1 / 10 % 10;	//十位
	//	c = num1 / 100;		//百位

	//	if (a * a * a + b * b * b + c * c * c == num1) {
	//		cout <<"while写法水仙花数："<< num1 << endl;
	//	}

	//	num1++;
	//}





	system("pause");
	return 0;
}