#include<iostream>
using namespace std;

int main5() {

	// 案例:  三只小猪称体重，判断哪只最重

	// 1,创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2, 让用户输入三只小猪的体重
	cout << "请输入小猪num1的体重" << endl;
	cin >> num1;

	cout << "请输入小猪num2的体重" << endl;
	cin >> num2;

	cout << "请输入小猪num3的体重" << endl;
	cin >> num3;

	// 打印三个小猪的体重
	cout << "1号小猪体重为：" << num1 << endl;
	cout << "2号小猪体重为：" << num2 << endl;
	cout << "3号小猪体重为：" << num3 << endl;


	//3,判断 
	if (num1 > num2) { //判断1和2谁重
		if (num1 > num3) {	//判断1和3谁重
			cout << "1号小猪最重" << num1 << endl;
		}
		else {
			cout << "3号小猪最重" << num3 << endl;
		}
	}
	else {	// num1 < num2时  执行下面代码
		if (num2 > num3) {
			cout << "2号小猪最重" << num2 << endl;
		}
		else {
			cout << "3号小猪最重" << num3 << endl;
		}
	}




	system("pause");

	return 0;
}