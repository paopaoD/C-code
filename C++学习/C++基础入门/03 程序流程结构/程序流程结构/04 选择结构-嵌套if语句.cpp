#include<iostream>
using namespace std;


int main4() {


//嵌套语句  在if语句中再嵌套一个if语句


	//练习：
	// 输入一个分数，如果大于600分，视为考上一本大学，在屏幕上输出
	//					如果大于700 考上北大，
	//					大于650 考上清华，
	//					其余 考上人大
	//			   如果大于500分，视为考上二本大学，在屏幕上输出

	//1 提示输入分数
	int score02 = 0;
	cout << "请输入高考的考试分数：" << endl;

	cin >> score02;

	//2 提示输入的分数
	cout << "你输入的分数为：" << score02 << endl;

	//3 判断
	if (score02 > 600) {
		cout << "恭喜，考上一本大学！" << endl;

		if (score02 > 700) {
			cout << "您能考入北京大学" << endl;
		}
		else if (score02 > 650) {
			cout << "您能考入清华大学" << endl;
		}
		else {
			cout << "您能考入人民大学" << endl;
		}
	}
	else if (score02 > 500) {
		cout << "恭喜，考上二本大学！" << endl;
	}
	else if (score02 > 400) {
		cout << "恭喜，考上三本大学！" << endl;
	}
	else {
		cout << "很遗憾，你未考上本科。" << endl;
	}




	system("pause");

	return 0;


	}
