#include<iostream>
using namespace std;


int main3() {

	// if语句：
	
	// 3,多条件的if语句：
		//		if(条件1){满足条件1执行的语句}
		//		else if(条件2){满足条件2执行的语句}
		//		...
		//		else{都不满足执行的语句}



	//练习：
	// 输入一个分数，如果大于600分，视为考上一本大学，在屏幕上输出
	//			   如果大于500分，视为考上二本大学，在屏幕上输出
	//			   如果大于400分，视为考上三本大学，在屏幕上输出
	//			   如果小于等于400分，视为未考上本科，在屏幕上输出


	//	输入一个分数，如果分数大于600分，则视为考上一本大学，在屏幕上输出
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "你输入的分数是：" << score << endl;


	int socre = 0;
	cout << "请输入考试的分数：" << endl;

	cin >> score;
	cout << "你输入的分数为：" <<score<< endl;

	if (score > 600) {
		cout << "恭喜，考上一本大学！" << endl;
	}
	else if (score > 500) {
		cout << "恭喜，考上二本大学！" << endl;
	}
	else if (score > 400) {
		cout << "恭喜，考上三本大学！" << endl;
	}
	else {
		cout << "很遗憾，你未考上本科。" << endl;
	}


	cout << "============================================" << endl;








	system("pause");
	
	return 0;
}
