#include<iostream>
using namespace std;

int main8() {

	// while循环						--->先判断 再执行
	//	作用：满足循环条件，执行循环语句
	//	语法：while（循环条件）{循环语句}
	//	解释：只要循环条件的结果为真，就执行循环语句


	// 打印0-9这10个数字
	int num = 0;
	//注意事项：程序必须提供跳出循环的出口，避免出现死循环
	while (num <= 9) {
		cout << "num = " << num << endl;
		num++;
	}


	// while循环练习案例：猜数字
	// 随机生成一个数字，进行猜测，


	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));


	//1,系统生成随机数
	//rand() % 100 	//随机生成0-99随机数
	int num1 = rand() % 100 + 1;
	//cout << num1 << endl;


	//2,玩家进行猜测
	int vaule = 0;
	cout << "游戏开始，请输入数字：" << endl;

	// 循环
	while (1) {

		cin >> vaule;
	
		//4,判断玩家的猜测
		if (vaule > num1) {
			cout << "猜大了" << endl;
		}
		else if (vaule < num1) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "恭喜，猜对了" << endl;
			break;	//退出循环
		}
	}

	
	








	system("pause");
	return 0;
}